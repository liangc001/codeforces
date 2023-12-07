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

int t;
int l,r;
int l_last;
int r_last;
int vis[100];
		int cnt=0;

signed main(){
	t=read();
	while(t--){
		int ans=0x3f3f3f3f;
		l=read(); r=read();
		int len=r-l+1;
		if(l_last!=0&&r_last!=0){
			if(l_last<l){
				for(int i=l_last;i<l;++i){
					cnt=0;
					int now=i;
					while(now){
						cnt++;
						if(now%2==1) vis[cnt]--;
						now/=2;
					}
				}
			}
			else if(l<l_last){
				for(int i=l;i<l_last;++i){
					cnt=0;
					int now=i;
					while(now){
						cnt++;
						if(now%2==1) vis[cnt]++;
						now/=2;
					}
				}
			}
			if(r_last>r){
				for(int i=r+1;i<=r_last;++i){
					cnt=0;
					int now=i;
					while(now){
						cnt++;
						if(now%2==1) vis[cnt]--;
						now/=2;
					}
				}
			}
			else if(r>r_last){
				for(int i=r_last+1;i<=r;++i){
					cnt=0;
					int now=i;
					while(now){
						cnt++;
						if(now%2==1) vis[cnt]++;
						now/=2;
					}
				}
			}
		for(int i=1;i<=32;++i){
			ans=min(len-vis[i],ans);
		}
		cout<<ans<<endl;
			l_last=l,r_last=r;
			continue;
		}
		for(int i=l;i<=r;++i){
			int now=i;
			cnt=0;
			while(now){
				cnt++;
				if(now%2==1) vis[cnt]++;
				now/=2;
			}
		}
		for(int i=1;i<=32;++i){
			ans=min(len-vis[i],ans);
		}
		cout<<ans<<endl;
		l_last=l,r_last=r;
	}
	return 0;
}
