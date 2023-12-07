#include <bits/stdc++.h>
using namespace std;
#define int long long

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
int a1,a2,a3,b1,b2,b3;

signed main(){
	t=read();
	while(t--){
		a1=read(); b1=read();
		a2=read(); b2=read();
		a3=read(); b3=read();
		if(b1==b2){
			if(b3<b2){
				cout<<abs(a1-a2)<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
		else if(b1==b3){
			if(b2<b3){
				cout<<abs(a1-a3)<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
		else if(b2==b3){
			if(b1<b2){
				cout<<abs(a2-a3)<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
		else{
			cout<<0<<endl;
		}
	}
	return 0;
}
