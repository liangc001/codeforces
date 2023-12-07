#include<bits/stdc++.h>

using namespace std;
#define int long long
int n,t;
signed main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;++i){
			cout<<2*i-1<<" ";
		}
		cout<<endl;
	}
	return 0;
}
