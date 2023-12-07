#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 100010
int t;
int n;
int a[maxn];

signed main(){
	t=read();
	while(t--){
		n=read();
		bool flag=0;
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		if(n%2==0){
			cout<<"YES"<<endl;
			continue;
		}
		else if(n==1){
			cout<<"NO"<<endl;
			continue;
		}
		for(int i=2;i<=n;++i){
			if(a[i]<=a[i-1]){
				flag=1;
				break;
			}
		}
		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
