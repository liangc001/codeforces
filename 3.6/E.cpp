#include<bits/stdc++.h>
#define N 100009
using namespace std;
typedef long long ll;
ll T,n,a[N],res,ans,k,t,flag;
int main(){
	scanf("%lld",&T);
	while(T--){
		scanf("%lld",&n);
		for(ll i=1;i<=n;i++) scanf("%lld",&a[i]);
		ll k=1;
		flag=0;
		ans=0;
		res=0;
		for (ll i=1;i<=n;i++){
			if(flag==0){
				if(a[i]==k){
					k*=2;
				}else{
					res=k-a[i];
					if(res<0||k%res!=a[i]){
						ans=-1; break;
					}
					flag=1;
					t=a[i];
				}
			}else{
				t=(t*2)%res;
				if(t!=a[i]){
					ans=-1;
					break;
				}
			}	
		}
		if(ans==0) ans=res;
		if(!flag) ans=-1;
		printf("%lld\n",ans);
	}
	return 0;
}
