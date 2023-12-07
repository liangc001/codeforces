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
int x0,n;

signed main(){
	t=read();
	while(t--){
		x0=read(); n=read();
		if(n==0){
			cout<<x0<<endl;
			continue;
		}
		if(x0%2==0){
			x0--;
			n--;
			int las=n%4;
			int tim=n/4;
			int de=tim*4;
			if(n)x0-=de;
			int tt=de+1;
			for(int i=1;i<=las;++i){
				if(i<=2) x0+=++tt;
				else x0-=++tt;
			}
			cout<<x0<<endl;
		}
		else{
			x0++;
			n--;
			int las=n%4;
			int tim=n/4;
			int de=tim*4;
			if(n)x0+=de;
			int tt=de+1;
			for(int i=1;i<=las;++i){
				if(i<=2) x0-=++tt;
				else x0+=++tt;
			}
			cout<<x0<<endl;
		}
	}
	return 0;
}
