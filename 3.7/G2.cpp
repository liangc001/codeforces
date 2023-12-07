#include<bits/stdc++.h>
#define N 10
using namespace std;
typedef long long ll;
ll T,n,ans,sum,a[N],res,m,b[2*N];
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		ans=0;
		sum=0;
		for(ll i=1;i<=7;i++){
			cin>>a[i],a[i+7]=a[i];
		}
		for(ll i=1;i<=14;i++){
			if(a[i]==1) b[++sum]=i;
		}
		ans=14*(n/sum);
		m=n%sum;
//		cout<<ans<<" "<<m<<endl;
		if(m==0){
			ans-=14;
			m=sum;
		}
		res=14;
		for(ll i=1;i+m-1<=sum;i++){
			res=min(res,b[i+m-1]-b[i]+1);
		}
		ans+=res;
		cout<<ans<<endl;
	}
	return 0;
}
