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

#define maxn 50010
int t,n;
int a[maxn];

signed main(){
	a[0]=1;
	for(int i=1;i<=20;++i){
		a[i]=a[i-1]*3;
	}
	t=read();
	while(t--){
		n=read();
		if(n>19){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			for(int i=0;i<n;++i){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
