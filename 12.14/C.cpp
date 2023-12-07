#include<bits/stdc++.h>
#define maxn 110
#define int long long
using namespace std;

int t;
int n,m;
int a[maxn];
int b[maxn];

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int ans;
bool f1,f2;
int gcd1,gcd2;

int cnt1,cnt2;
int x;

signed main(){
	t=read();
	while(t--){
		n=read();
		cnt1=0; cnt2=0;
		f1=1; f2=1;
		for(int i=1;i<=n;i++){
			x=read(); if(i%2==1) a[++cnt1]=x; else b[++cnt2]=x;
		}
		gcd1=a[1]; for(int i=2;i<=cnt1;i++) gcd1=__gcd(gcd1,a[i]);
		gcd2=b[1]; for(int i=2;i<=cnt2;i++) gcd2=__gcd(gcd2,b[i]);
		for(int i=1;i<=cnt2;i++){
		    if(b[i]%gcd1==0){
		    	f1=0;
		    	break;
			}
		}
		for(int i=1;i<=cnt1;i++){
		    if(a[i]%gcd2==0){
		    	f2=0;
		    	break;
			}
		}
		if(f1) ans=gcd1;
		else if(f2) ans=gcd2;
		if(f2||f1) cout<<ans<<endl;
		else cout<<0<<endl;
	}
	return 0;
}
