#include<bits/stdc++.h>

using namespace std;

int t,n,k;

signed main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		bool flag=0;
		for(int i=1;i<=n;++i){
			int x;
			cin>>x;
			if(x==k){
				flag=1;
			}
		}
		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
