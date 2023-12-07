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

int t;
int f[100];

signed main(){
	t=read();
	f[0]=1;
	f[1]=2;
	for(int i=2;i<=20;++i){
		f[i]=f[i-1]*2;
	}
	while(t--){
		int l=read(); int r=read();
		int now=0;
		int ans=0;
		for(int i=1;i<=20;++i){
			if(f[i]>r) break;
//			cout<<(((r/f[i])-(l/f[i]))+1)*(f[i-1])<<endl;
			int t=((r-l+1)/f[i])*(f[i-1]);
			ans=max(ans,t);
		}
		cout<<(r-l+1)-ans<<endl;
	}
	return 0;
}
