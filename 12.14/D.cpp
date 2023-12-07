#include <bits/stdc++.h>
#define maxn 110
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
int n,k;
int a[110];
priority_queue<int> q_v;
priority_queue<int,vector<int>,greater<int> >q;

signed main(){
	t=read();
	while(t--){
		n=read(); k=read();
		int ans=0;
		while(!q.empty()) q.pop();
		while(!q_v.empty()) q_v.pop();
		for(int i=1;i<=n;++i){
			a[i]=read();
		}//1 1 2 3 7 10 10 10 10
		sort(a+1,a+1+n);
		for(int i=1;i<=n;++i){
			if(i>n-k) break;
			else q.push(a[i]);
		}
		for(int i=n;i>=n-k+1;--i){
			while(q.top()/a[i]<q.top()+a[i]&&!q.empty()){
				q_v.push(q.top()); q.pop();
			}
			ans+=q_v.top()/a[i];
			q_v.pop();
			while(!q_v.empty()){
				q.push(q_v.top()); q_v.pop();
			}
		}
		while(!q.empty()){
			ans+=q.top(); q.pop();
		}
		cout<<ans<<endl;
	}
	return 0;
}
