#include<bits/stdc++.h>
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
int t;
int a,b,n;
int l[maxn];
int cnt;
int sum[maxn];

signed main(){
	t=read();
	while(t--){
		cnt++;
		a=read(); b=read(); n=read();
		sum[0]=0;
		for(int i=1;i<=a;++i){
			l[i]=read();
			sum[i]=sum[i-1]+l[i];
		}
		int lev=a,lvb=b;
		for(int i=1;i<=n;++i){
			int na,nb;
			int pos=lower_bound(sum+1,sum+1+a,lev)-sum;
			if(sum[pos]==a){
				na=pos; nb=l[pos];
			}
			else{
				na=pos; nb=lev-sum[pos-1];
			}
			if(na==lev&&nb==lvb){
				break;
			}
			lev=na; lvb=nb;
		}
		printf("Case #%lld: %lld-%lld\n",cnt,lev,lvb);
	}
	return 0;
}
