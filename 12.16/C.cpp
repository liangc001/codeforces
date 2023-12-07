#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int a[100010];
bool vis[100010];

signed main(){
	int t=read();
	while(t--){
		int n=read();
		for(int i=1;i<=n;++i) a[i]=read(),vis[i]=0;
		sort(a+1,a+1+n);
		bool flag=0;
		int ans=0,x=1;
		for(int i=1;i<=n;++i){
			if(a[i]<=n&&vis[a[i]]==0) vis[a[i]]=1;
			else{
				ans++;
				while(vis[x]) x++;
				if(x>(a[i]-1)/2) flag=1;
				else vis[x]=1;
			}
		}
		if(flag==1){
			cout<<-1<<endl;
		}
		else cout<<ans<<endl;
	}
	return 0;
}
