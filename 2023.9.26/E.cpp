#include<bits/stdc++.h>

using namespace std;

#define maxn 200010
#define int long long
int t,n,a[maxn],q,l,k;
int num[maxn][32];
int mul[32];

inline bool check(int x){
	int sum=0;
	for(int i=0;i<=30;++i){
		// cout<<num[l][i]<<" ";
		if(num[l][i]>x){
			sum+=mul[i];
		}
	}
	// cout<<endl<<x<<" "<<sum<<endl;
	if(sum>=k){
		return 1;
	}
	else{
		return 0;
	}
}

signed main(){
	ios::sync_with_stdio(0);
	mul[0]=1;
	for(int i=1;i<=30;++i){
		mul[i]=mul[i-1]*2;
		// cout<<mul[i]<<endl;
	}
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			for(int j=0;j<=30;++j){
				num[i][j]=n+1;
			}
		}
		for(int j=0;j<=30;++j){
			num[n+1][j]=n+1;
		}
		for(int i=n;i>=1;--i){
			for(int j=0;j<=30;++j){
				num[i][j]=num[i+1][j];
			}
			int x=a[i];
			// cout<<x<<endl;
			queue<int> st;
			while(!st.empty()) st.pop();
			while(x!=0){
				int las=x%2;
				st.push(las);
				x/=2;
			}
			int tim=0;
			while(!st.empty()){
				int tp=st.front(); st.pop();
				// cout<<tp;
				if(tp==0) num[i][tim]=min(num[i][tim],i);
				tim++;
			}
			for(int k=tim;k<=30;++k){
				num[i][k]=min(num[i][k],i);
			}
			// cout<<endl;
		}
		cin>>q;
		for(int i=1;i<=q;++i){
			cin>>l>>k;
			int ll=l,rr=n+1,ans=-1;
			while(ll<=rr){
				int mid=(ll+rr)>>1;
				if(check(mid)){
					ans=mid;
					ll=mid+1;
				} 
				else{
					rr=mid-1;
				}
			}
			cout<<ans<<" ";
		}
		cout<<endl;
	}
	return 0;
}
