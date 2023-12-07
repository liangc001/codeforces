#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 200010
int t;
int a[maxn];
int n;
bool vis[1000010];

bool cmp(int a,int b){
	return a>b;
}

signed main(){
	t=read();
	while(t--){
		memset(vis,0,sizeof(vis));
		n=read();
		for(int i=1;i<=n;++i){
			a[i]=read(); vis[a[i]]=1;
		}
		sort(a+1,a+1+n,cmp);
		int dep=floor(n/2);
		int num=0;
		for(int i=n;i>=1;--i){
			for(int j=i-1;j>=1;--j){
				if(vis[a[j]%a[i]]==0){
					num++;
					printf("%d %d\n",a[j],a[i]);
				}
				if(num==dep){
					break;
				}
			}
			if(num==dep){
				break;
			}
		}
	}
	return 0;
}
