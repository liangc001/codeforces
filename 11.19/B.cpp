#include <bits/stdc++.h>
#define int long long
using namespace std;
#define mod 1000000007
#define maxn 100010

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n;
char s[maxn];
int mul[maxn];int all;
int num[27][maxn];
int len,ans;
int re[27],caase=0;
bool vis[27];

inline void init(){
	memset(vis,0,sizeof(vis));
	all=0;
	for(int i=0;i<26;++i) re[i]=i;
	ans=0;
	memset(num,0,sizeof(num));
	len=0;
}

inline bool cmp(int x,int y){
	for(int i=len+1;i>=0;i--){
		if(num[x][i]==num[y][i]){
			continue;
		}
		else{
			return num[x][i]>num[y][i];
		}
	}
	return false;
}

signed main(){
	mul[0]=1;
	for(int i=1;i<=100010;++i) mul[i]=mul[i-1]*26%mod;
	while(cin>>n){
		caase++;
		init();
		for(int i=1;i<=n;++i){
			scanf("%s",s); reverse(s,s+strlen(s));
			for(int j=0;j<strlen(s);++j){
				if(j==strlen(s)-1&&strlen(s)==1){
					if(vis[s[j]-'a']==0){
						vis[s[j]-'a']=1; all++;
					}
				}
				int k=j;
				num[s[j]-'a'][j]++;
				if(num[s[j]-'a'][j]==26){
					while(1){
						if(num[s[j]-'a'][k]==26){
							num[s[j]-'a'][k]=0; num[s[j]-'a'][k+1]++;
						}
						else break; k++;
					}
				}
				len=max(len,k+1);
			}
		}
		sort(re,re+26,cmp);
		for(int i=0;i<=25;++i){
			int res=25-i;
			if(all==26&&i==25) break;
			for(int j=0;j<=len;++j){
				if(num[re[i]][j]==0) continue;
				ans=(ans+res*(num[re[i]][j]%mod)*mul[j])%mod;
			}
		}
		printf("Case #%d: %d\n",caase,(ans)%mod);
	}
	return 0;
}
