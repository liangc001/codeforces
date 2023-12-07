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

signed main(){
	t=read();
	while(t--){
		int n=read();
		int a=0,b=0,c=0;
		if(n%2==0){
			cout<<n-3<<" "<<2<<" "<<1<<endl;
		}
		else{
			n--;
			for(int i=3;i<n/2;i+=2){
				if(__gcd(n-i,i)==1){
					cout<<i<<" "<<n-i<<" "<<1<<endl;
					break;
				}
			}
		}
	}
}
