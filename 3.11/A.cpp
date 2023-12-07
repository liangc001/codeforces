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

signed main(){
	t=read();
	while(t--){
		int n=read();
		if(n%3==1){
			cout<<"1";
		}
		for(int i=1;i<=n/3;++i){
			cout<<"21";
		}
		if(n%3==2){
			cout<<"2";
		}
		cout<<endl;
	}
	return 0;
}
