#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

const int py=96;
int t;
int n;
signed main(){
	t=read();
	while(t--){
		n=read();
		int a=0;
		while(n>0){
			a++;
			int now=(sqrt(1+8*n)-1)/2;
//			int now=log2(n+1);
			for(register int i=1;i<=now;++i){
				cout<<(char)(py+a);
			}
//			n-=(pow(2,now)-1);
			n-=(now+1)*now/2;
		}
		cout<<endl;
	}
	return 0;
}
