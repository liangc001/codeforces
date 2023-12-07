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
int n;

inline int ksm(int a,int b){
	int sum=1;
	while(b){
		if(b&1)sum=sum*a;
		a=a*a;
		b>>=1;
	}
	return sum;
}

signed main(){
	t=read();
	while(t--){
		n=read();
		cout<<ksm(2,n)-1<<endl;
	}
	return 0;
}
