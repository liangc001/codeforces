#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 1010
int n;
int a[maxn];
int ans;

signed main(){
	n=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
	}
	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	sort(a+1,a+1+n);
	for(int i=2;i<=n;++i){
		ans+=a[i]-a[i-1]-1;
	}
	cout<<ans<<endl;
	return 0;
}
