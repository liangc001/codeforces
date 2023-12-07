#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 500010
int n,q;
int x[maxn];
int y[maxn];
int f[maxn];
int fa[maxn];
vector<int>v;

signed main(){
	q=read();
	for(int i=1;i<=500000;i++) fa[i]=i;
	for(int i=1;i<=q;++i){
		f[i]=read();
		if(f[i]==1){
			x[i]=read();
		}
		else{
			x[i]=read(); y[i]=read();
		}
	}
	for(int i=q;i>=1;--i){
		if(f[i]==1){
			v.push_back(fa[x[i]]);
		}
		else{
			fa[x[i]]=fa[y[i]];
		}
	}
	vector<int>::reverse_iterator it;
	for(it=v.rbegin();it!=v.rend();++it){
		cout<<*it<<" ";
	}
	return 0;
}
