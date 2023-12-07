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
int n,a[maxn],b[maxn];
int a1,a2,b1,b2;
int x1,x2,YY,y2;
#define inf 1000000005
signed main(){
	int t=read();
	while(t--){
		a1=a2=b1=b2=inf;
		n=read();
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		for(int i=1;i<=n;++i){
			b[i]=read();
		}
		for(int i=1;i<=n;++i){
			a1=min(a1,abs(a[1]-b[i]));
			a2=min(a2,abs(a[n]-b[i]));
			b1=min(b1,abs(b[1]-a[i]));
			b2=min(b2,abs(b[n]-a[i]));
		}
		x1 = min(a1 + b1, abs(a[1] - b[1]));
		YY = min(a2 + b2, abs(a[n] - b[n]));
		x2 = min(a1 + b2, abs(a[1] - b[n]));
		y2 = min(a2 + b1, abs(a[n] - b[1]));
		cout<<min(x1+YY,x2+y2)<<endl;
	}
	return 0;
}
