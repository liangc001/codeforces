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

#define maxn 100010
int n;
int a[maxn];
int dp[maxn][210];
//i+1  
int m;

signed main(){
	srand(time(0));
	int t=rand()%5+1;
	cout<<t<<endl;
	while(t--){
	int j=1; int n=rand()%10000+1,m=rand()%998244353+1;
	cout<<n<<endl;
	for(int i=1;i<=n;++i){
		cout<<j%m<<" ";
		else cout<<rand()<<" ";
		j*=2; j%=m;
	}
//	for(int i=1;i<=n;++i){
//		cout<<rand()<<" ";
//	}
	cout<<endl;
}
	return 0;
}
