#include <bits/stdc++.h>
#define int long long
#define maxn 300010
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
int a[maxn];

signed main(){
	t=read();
	while(t--){
		n=read();
		int min_ans=0;
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		sort(a+1,a+1+n);
		for(int i=1;i<=n;++i){
			if(a[i]!=a[i-1]){
				min_ans++;
			}
		}
		for(int i=1;i<=min_ans;++i){
			cout<<min_ans<<" ";
		}
		int now=min_ans+1;
		for(int i=now;i<=n;++i){
			min_ans++;
			cout<<min_ans<<" ";
		}
		cout<<endl;
	}
	return 0;
}
