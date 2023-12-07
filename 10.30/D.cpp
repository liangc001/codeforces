#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
int a,b;

signed main(){
	t=read();
	while(t--){
		a=read(); b=read();
		if(a==b){
			cout<<a<<endl;
			continue;
		}
		int now_gcd=__gcd(a,b);
		cout<<now_gcd<<endl;
		cout<<a*b/now_gcd<<endl;
	}
	return 0;
}
