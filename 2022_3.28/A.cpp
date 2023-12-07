#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;

int t,n,k;

int cnt;

inline int ksm(int a,int b){
	int sum=1;
	while(b){
		if(b&1) sum=(sum*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return sum%mod;
}

signed main(){
	cin>>t;
	while(t--){
		cnt++;
		cin>>n>>k;
		int sum=1;
		int now=1;
		for(int i=1;i<k;++i){
			now=((now*(n-i+1))%mod*ksm(i,mod-2))%mod;
			sum=(now+sum)%mod;
		}
		printf("Case #%lld: %lld\n",cnt,(ksm(2,n)-sum+mod)%mod);
	}
	return 0;
}
