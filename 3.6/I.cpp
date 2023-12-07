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
int n;
int a[maxn];
int num[100];

signed main(){
	int t=read();
	while(t--){
		n=read();
		int macn=0;
		memset(num,0,sizeof(num));
		for(int i=1;i<=n;++i){
			a[i]=read();
			int cnt=1;
			while(a[i]){
				if(a[i]%2==1){
					num[cnt]++;
				}
				a[i]/=2; cnt++;
			}
			macn=max(macn,cnt);
		}
		int ans=num[1];
		int kl=num[1];
		for(int i=1;i<=macn;++i){
			if(num[i]>=kl){
				num[i]-=kl;
			}
			else{
				kl=num[i];
				num[i]-=kl;
			}
		}
		for(int i=macn;i>=1;--i){
			if(num[i]==0){
				continue;
			}
			num[i]--;
			ans++;
			num[1]++;
			kl=num[1];
			bool flag=0;
			for(int j=1;j<=macn;++j){
				if(num[i]==0){
					flag=1;
				}
				if(flag==1){
					num[i]++;
				}
			}
			flag=0;
			for(int j=1;j<=macn;++j){
				if(num[j]>=kl){
					num[j]-=kl;
					flag=1;
				}
				else{
					kl=num[j];
					num[j]-=kl;
				}
				if(kl==0){
					break;
				}
			}
			if(flag==1) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

/*
 111
1111
1011
1000

1000
   0

*/
