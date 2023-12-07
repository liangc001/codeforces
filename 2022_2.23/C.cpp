#include <bits/stdc++.h>
#define int long long
using namespace std;
#define maxn 200010

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,t;
int a[maxn],x;
map<int,int>mp;
int ans;

signed main() {
	t=read();
	while (t--) {
		mp.clear(); ans=0;
		n=read(); x=read();
		for (register int i = 1; i <= n; i++){
			a[i]=read(), mp[a[i]]++;
		}
		sort(a + 1, a + n + 1);
		for (register int i = 1; i <= n; i++) {
			if (!mp[a[i]]){
				continue;
			}
			if (!mp[a[i]*x]){
				ans++;
			}
			else{
				mp[a[i]*x]--;
			}
			mp[a[i]]--;
		}
		cout<<ans<<endl;
	}
	return 0;
}
