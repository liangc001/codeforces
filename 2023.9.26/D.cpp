#include<bits/stdc++.h>

using namespace std;
#define int long long
#define maxn 200010
#define maxq 200010
int t,n,k;
string s;
int l[maxn],r[maxn];
int q;
int x[maxq];
int num[maxn];
bool flag[maxn];
int tim[maxn];

signed main(){
	ios::sync_with_stdio(0);
	cin>>t;
	while(t--){
		for(int i=1;i<=n;++i) num[i]=flag[i]=tim[i]=0;
		cin>>n>>k;
		cin>>s; s=" "+s;
		for(int i=1;i<=k;++i){
			cin>>l[i];
		}
		for(int i=1;i<=k;++i){
			cin>>r[i];
		}
		cin>>q;
		for(int i=1;i<=q;++i){
			cin>>x[i]; num[x[i]]++;
		}
		for(int i=1;i<=q;++i){
			if(num[x[i]]%2==0){
				continue;
			}
			else{
				if(flag[x[i]]==0){
					int pos=lower_bound(r+1,r+1+k,x[i])-r;
					int a=min(x[i],r[pos]+l[pos]-x[i]);
					int b=max(x[i],r[pos]+l[pos]-x[i]);
					tim[a]++; tim[b]--;
//					cout<<"a b"<<a<<" "<<b<<endl;
					flag[x[i]]=1;
				}
				else{
					continue;
				}
			}
		}
//		cout<<"tim"<<endl;
		for(int i=1;i<s.size();++i){
			tim[i]=tim[i-1]+tim[i];
//			cout<<tim[i]<<" ";
			if(tim[i]%2==1){
				int pos=lower_bound(r+1,r+1+k,i)-r;
				int a=min(i,r[pos]+l[pos]-i);
				int b=max(i,r[pos]+l[pos]-i);
//				cout<<"a b"<<a<<" "<<b<<endl;
				if(a==i) swap(s[a],s[b]);
			}
		}
		for(int i=1;i<s.size();++i){
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
