#include <bits/stdc++.h>
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 200010
int w,h;
int x_u[maxn],y_l[maxn];
int x_d[maxn],y_r[maxn];
int k1,k2,k3,k4;


signed main(){
	int t=read();
	while(t--){
		w=read(); h=read();
		k1=read();
		for(int i=1;i<=k1;++i) x_d[i]=read();
		k2=read();
		for(int i=1;i<=k2;++i) x_u[i]=read();
		k3=read();
		for(int i=1;i<=k3;++i) y_l[i]=read();
		k4=read();
		for(int i=1;i<=k4;++i) y_r[i]=read();
		int len1=max(x_d[k1]-x_d[1],x_u[k2]-x_u[1]);
		int len2=max(y_l[k3]-y_l[1],y_r[k4]-y_r[1]);
		int ans=max(len1*h,len2*w);
		cout<<ans<<endl;
	}
	return 0;
}
