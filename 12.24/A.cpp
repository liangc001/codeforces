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
		int sum=0;
		for(int i=1;i<=n;++i){
			a[i]=read();
			sum+=a[i];
		}
		cout<<(sum%n==0?0:1)<<endl;
	}
	return 0;
}
