#include <bits/stdc++.h>
using namespace std;
#define int long long
inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 200010

int t;
int n;
int a[maxn];
double ans;

//inline void bfs(int now,double p,int tim){
//	if(now==0){
//		ans+=p*(double)tim;
//		return;
//	}
//	if(now==1){
//		bfs(0,p,tim+1);
//	}
//	else{
//		bfs(now-1,p/2,tim+1);
//		bfs(0,p/2,tim+1);
//	}
//}

inline void bfs(int now){
	double p=0.5; int tim=1;
	for(register int i=now;i>1;--i){
		ans+=p*(double)tim;
		p=p/2.0; tim++;
	}
	ans+=(double)(tim)*(p*2.0);
}

signed main(){
	t=read();
	while(t--){
		n=read(); ans=0;
		for(register int i=1;i<=n;++i){
			a[i]=read();
		}
		for(register int i=1;i<=n;++i){
			bfs(a[i]);
		}
		printf("%.4lf\n",ans);
	}
	return 0;
} 
