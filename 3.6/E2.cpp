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
int a[maxn];

signed main(){
	int t=read();
	while(t--){
		int m=0;
		int n=read();
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		for(m=1;m<=998244353;++m){
			int k=1; bool flag=0;
			for(int i=1;i<=n;++i){
				if(k!=a[i]){
					flag=1;
					break;
				}
				k=k*2%m;
			}
			if(flag==0){
				break;
			}
		}
		if(m==998244354) cout<<-1<<endl; else cout<<m<<endl;
	}
	return 0;
}
