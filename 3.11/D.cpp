#include <bits/stdc++.h>
#define int long long

const int inf = 1e9;
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t,sum;

const int maxn=10000000+10;
int a[maxn],vis[maxn],cnt;
inline void init(){
	for(int i=1;i<=maxn;i++) vis[i]=1;
	for(int i=2;i<=maxn;i++){
		if(vis[i]==1) a[++cnt]=i;
		for(int j=1;j<=cnt&&a[j]*i<=maxn;j++){
			vis[a[j]*i]=0;
		} 
	}
 } 
 
 bool check(int x){
 	for(int i=2;i*i<=x;++i){
 		if(x%i==0) return 0;
	 }
	 return 1;
 }

signed main(){
	t=read(); sum=0;
	while(t--){
	sum=0;
	int x=read(); int d=read();
    while (x % d == 0) {
        x /= d;
        ++sum;
    }
    if (sum <= 1) {
        cout<<"NO";
    } 
	else if (check(x)) {
        if (sum == 2) {
            cout<<"NO";
        } 
		else if (check(d)) {
            cout<<"NO";
        } 
		else {
            if (x * x == d) {
                if (sum == 3)
     	               cout<<"NO";
     	           else
     	               cout<<"YES";
     	       } 
				else
  	              cout<<"YES";
  	      }
  	  } 
		else {
 	       cout<<"YES";
	    }
    	cout<<endl;
	}
	return 0;
}
