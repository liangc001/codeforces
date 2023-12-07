#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 110
int t;
int n;
int a[maxn];

signed main(){
	t=read();
	while(t--){
		n=read();
		int ans=0;
		for(int i=1;i<=n;++i){
			a[i]=read();
			ans=max(ans,a[i]-i);
		}
		cout<<ans<<endl;
	}
	return 0;
}
