#include<bits/stdc++.h>
#define int long long
inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}
using namespace std;

int t;
int a,b,c,d,e;
int cnt;

signed main(){
	t=read();
	while(t--){
		cnt++;
		a=read(); b=read(); c=read(); d=read(); e=read();
		int n=read();
		int ans=0;
		for(int i=1;i<=n;++i){
			int x=read();
			if(x>0&&x<=48){
				ans+=a;
			}
			else if(x>48&&x<=56){
				ans+=b;
			}
			else if(x>56&&x<=60){
				ans+=c;
			}
			else if(x>60&&x<=62){
				ans+=d;
			}
			else{
				ans+=e;
			}
		}
		printf("Case #%lld: %lld\n",cnt,ans*10000);
	}
	return 0;
}
