#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
int n;
priority_queue<int,vector<int>,greater<int> > q1;
priority_queue<int,vector<int>,less<int> >q2;

signed main(){
	t=read();
	while(t--){
		while(!q1.empty()) q1.pop();
		while(!q2.empty()) q2.pop();
		n=read();
		for(int i=1;i<=n;++i){
			int x=read();
			q1.push(x); q2.push(x);
		}
		int ans=q2.top();
		int maxn=0;
		while(!q1.empty()){
			int now=q1.top(); q1.pop();
			if(q1.empty()) break;
			ans-=now;
			if(now<0) ans-=(q1.size()-1)*abs(now);
			else ans+=(q1.size()-1)*now;
			maxn=max(maxn,ans);
		}
		maxn=max(maxn,ans);
		cout<<maxn<<endl;
	}
	return 0;
}
