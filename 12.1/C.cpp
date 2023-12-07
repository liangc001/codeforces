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

#define maxn 110
int t;
int n;
int h;
int a[maxn];
#define inf 0x7fffffffffffffff

inline bool check(int now){
	int sum=0;
	a[n+1]=inf;
	for(int i=2;i<=n+1;++i){
		if(a[i]-a[i-1]<=now){
			sum+=a[i]-a[i-1];
		}
		else{
			sum+=now;
		}
		if(sum>=h) return true;
	}
	if(sum<h) return false;
	else return true;
}

signed main(){
	t=read();
	while(t--){
		n=read(); 
		h=read();
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		int l=1,r=h;
		while(l<r){
			int mid=(l+r)>>1;
			if(check(mid))r=mid;
			else l=mid+1;
		}
		cout<<l<<endl;
	}
	return 0;
}
