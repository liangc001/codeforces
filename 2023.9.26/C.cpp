#include<bits/stdc++.h>

using namespace std;
#define int long long
int n,t,k,x;
#define maxn 200010
int sum[maxn];
signed main(){
	cin>>t;
	sum[1]=1;
	for(int i=2;i<=maxn-10;++i){
		sum[i]=sum[i-1]+i;
	}
	while(t--){
		cin>>n>>k>>x;
		if(sum[k]>x||sum[n]-sum[n-k]<x){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
