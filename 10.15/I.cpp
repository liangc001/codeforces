#include <bits/stdc++.h>
#define int long long
using namespace std;
#define maxn 10010

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
int a,b;
int ans[maxn];
int cnt;

signed main(){
	t=read();
	while(t--){
		bool flag=0;
		for(register int i=1;i<=cnt;++i) ans[i]=0;
		cnt=0;
		a=read(); b=read();
		while(1){
			if(a==0&&b==0){
				break;
			}
			int now_a=a%2;
			int now_b=b%2;
			if(now_a==0&&now_b==1){
				cout<<-1<<endl; flag=1;
				break;
			}
			else if(now_a==1&&now_b==0){
				ans[++cnt]=1;
			}
			else if(now_a==1&&now_b==1){
				ans[++cnt]=0;
			}
			else if(now_a==0&&now_b==0){
				ans[++cnt]=0;
			}
			a/=2; b/=2;
		}
		if(flag==1){
			continue;
		}
		int g=1;
		int an=0;
		for(register int i=1;i<=cnt;++i){
			an+=g*ans[i];
			g*=2;
		}
		cout<<an<<endl;
	}
	return 0;
}
