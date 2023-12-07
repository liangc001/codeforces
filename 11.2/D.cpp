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
int n;
int a[maxn];
string s;
int f[maxn];
int sum[maxn];
int vis[maxn];

signed main(){
	t=read();
	while(t--){
		n=read();
		for(int i=1;i<=n+1;++i){
			f[i]=0; sum[i]=0; vis[i]=0;
		}
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		cin>>s;
		for(int i=0;i<s.size();++i){
			if(s[i]=='R'){
				f[max(1,a[i+1])]++; f[n+1]--;
			}
			else{
				f[1]++; f[min(n+1,a[i+1]+1)]--;
				vis[min(n+1,a[i+1]+1)]++;
			}
		}
		bool flag=0;
		int cnt=0;
		for(int i=1;i<=n;++i){
			sum[i]=sum[i-1]+f[i]-1;
			cnt++;
			if(vis[i+1]>0){
				f[i+1]+=min(cnt,vis[i+1]); cnt=0;
			}
			if(sum[i]<0){
				cout<<"NO"<<endl;
				flag=1; break;
			}
		}
		if(flag==0)cout<<"YES"<<endl;
	}
}
