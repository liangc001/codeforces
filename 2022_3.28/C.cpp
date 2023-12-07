#include<bits/stdc++.h>

using namespace std;

#define maxn 1010
int t;
int n;
int a,b;
int cnt;
int pos[maxn];

signed main(){
	cin>>t;
	while(t--){
		cnt++;
		cin>>n;
		int sum=0;
		for(int i=1;i<=n+1;++i){
			cin>>pos[i]; sum+=pos[i];
		}
		int mn=0;
		for(int i=1;i<=n;++i){
			cin>>a>>b;
			mn=max(mn,b);
		}
		printf("Case #%d: %d\n",cnt,sum+mn);
	}
	return 0;
}
