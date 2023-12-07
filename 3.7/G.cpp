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

#define maxn 20
int t;
int k;
int a[maxn];

signed main(){
	t=read();
	while(t--){
		k=read();
		int sum=0;
		for(int i=1;i<=7;++i){
			a[i]=read(); a[i+7]=a[i];
			if(a[i]==1){
				sum++;
			}
		}
		int num=k/sum*7;
		if(k%sum==0){
			num-=7;
		}
		k=k%sum; if(k==0) k=sum;
		int pl=0x3f3f3f3f;
		for(int i=1;i<=7;++i){
			int now=k; int p_su=0;
			for(int j=i;j<=i+6;++j){
				if(a[j]==1){
					now--;
				}
				p_su++;
				if(now<=0) break;
			}
			pl=min(pl,p_su);
		}
		cout<<num+pl<<endl;
	}
	return 0;
}
