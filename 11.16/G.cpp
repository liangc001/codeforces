#include <bits/stdc++.h>
using namespace std;
#define maxn 1000010

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,l,t;
int x[maxn],y[maxn];
int a[maxn];
int a_last[maxn];

signed main(){
	n=read(); l=read(); t=read();
	for(int i=1;i<=l;++i){
		x[i]=read();y[i]=read();
	}
	for(int i=1;i<=n;++i){
		a[i]=read();
	}
	while(t--){
		for(int i=1;i<=n;++i){
			a_last[i]=a[i];
		}
		for(int i=1;i<=l;++i){
			if(a_last[x[i]]==a[x[i]]&&a_last[y[i]]==a[y[i]]) continue;
			a[x[i]]|=a[y[i]];
		} bool flag=0;
		for(int i=1;i<=n;++i){
			if(a[i]!=a_last[i]){
				flag=1; break;
			}
		}
		if(flag==0) break;
	}
	for(int i=1;i<=n;++i)
		cout<<a[i]<<" ";
	return 0;
}
