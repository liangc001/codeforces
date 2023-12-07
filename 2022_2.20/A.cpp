#include <bits/stdc++.h>
using namespace std;
int t,n,a[200010],ans;

signed main(){
	ios::sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>n;
		a[0]=a[1]; ans=0;
		for(register int i=1;i<=n;++i) cin>>a[i];
		for(register int i=2;i<=n-1;++i){
			if(a[i]>a[i+1]&&a[i]>a[i-1]){
				if(a[i+2]>a[i]) a[i+1]=a[i+2];
				else a[i+1]=a[i];
				ans++;
			}
		}
		cout<<ans<<endl;
		for(register int i=1;i<=n;++i){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
