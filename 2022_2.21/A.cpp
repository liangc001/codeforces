#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,k;

signed main(){
	n=read(); k=read();
	if(n<=k){
		cout<<"Adrien";
		return 0;
	}
	if(n%(k+1)!=0){
		cout<<"Adrien";
	}
	else{
		cout<<"Austin";
	}
	return 0;
}
