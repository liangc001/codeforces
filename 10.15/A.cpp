#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

#define maxn 200010

int n;
int t;
int k;
int a[maxn];

signed main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		int maxa=0,mina=INF;
		for(register int i=1;i<=n;++i){
			cin>>a[i];
			maxa = max(maxa,a[i]);
			mina = min(mina,a[i]);
		}
		if(n==1){
			cout<<0<<endl;
			continue;
		}
		cout<<abs(maxa-mina)<<endl;
	}
	return 0;
}
