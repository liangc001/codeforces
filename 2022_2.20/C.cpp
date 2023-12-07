#include <bits/stdc++.h>
#define int long long
#define maxn 200010
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}


//struct up{
//	int x,id;
//	inline bool operator <(const up &a)const{
//		return x>a.x;
//	}
//};
//struct down{
//	int x,id;
//	inline bool operator <(const down &a)const{
//		return x<a.x;
//	}
//};
struct ANS{
	int z,y,x;
}ans[maxn];
int cnt;

//priority_queue<up > q1;
//priority_queue<down > q2;
int t,n,a[maxn];

signed main(){
	ios::sync_with_stdio(0);
	t=read();
	while(t--){
		cnt=0; bool flag=0;
		n=read();
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		if(a[n-1]>a[n]){
			cout<<-1<<endl;
			continue;
		}
		int bi=a[n];
		for(int i=n-2;i>=1;--i){
			if(a[i]>a[i+1]||a[i+1]-bi<a[i]){
				a[i]=a[i+1]-bi;
				ans[++cnt].x=i;
				ans[cnt].y=i+1; ans[cnt].z=n;
			}
			if(a[i]>a[i+1]){
				flag=1; break;
			}
		}
		if(flag==1){
			cout<<-1<<endl;
			continue;
		}
		cout<<cnt<<endl;
		for(int i=1;i<=cnt;++i){
			cout<<ans[i].x<<" "<<ans[i].y<<" "<<ans[i].z<<endl; 
		}
	}
	return 0;
}
