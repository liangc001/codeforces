#include <bits/stdc++.h>
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 100010
int n,k;
int a[maxn];
int b[maxn];
bool vis[maxn];
int ans;
priority_queue<int,vector<int>,greater<int> > q[maxn],p;

signed main(){
	n=read(); k=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
	}
	for(int j=1;j<=n;++j){
		b[j]=read();
	}
	for(int i=1;i<=n;++i){
		q[a[i]].push(b[i]);
	}
	int sum=0;
	for(int i=1;i<=k;++i){
		if(q[i].empty()){
			continue;
		}
		vis[i]=1;
		while(q[i].size()>1){
//			cout<<i<<" "<<q[i].top()<<endl;
			p.push(q[i].top()); q[i].pop();
		}
	}
	for(int i=1;i<=k;++i){
		if(vis[i]==0){
			sum++;
		}
	}
	for(int i=1;i<=sum;++i){
		ans+=p.top(); p.pop();
	}
	cout<<ans<<endl;
	return 0;
}
