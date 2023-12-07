#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,vis[40],lc[40];
int num=1;
int ans=0,a;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

signed main(){
	lc[0]=1;
	for(int i=1;i<=31;i++){
		lc[i]=num<<1;
		num<<=1;
	}
	t=read();
	while(t--){
		n=read();
		memset(vis,0,sizeof(vis));
		ans=0; a=0;
		for(register int i=1;i<=n;i++){
			cin>>a;
			int cnt=0;
			while(a>0){
				if(a%2==1)
				vis[cnt]=1;
				a/=2;
				cnt++;
			}
		}
		for(int i=0;i<=32;i++)if(vis[i])ans+=lc[i];
		cout<<ans<<endl;
	}
	return 0;
}
