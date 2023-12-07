#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 110
int a[maxn];

signed main(){
	int t=read();
	while(t--){
		int n=read();
		int x=0,y=0,z=0;
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		sort(a+1,a+1+n);
//		for(int i=1;i<=n;++i){
//			cout<<a[i]<<endl;
//		}
		int las=0;
		for(int i=1;i<=n;++i){
			int now=a[i];
			if(now==las) continue;
			int tree=now/3;
			now%=3;
			int two=now/2;
			now%=2;
			int one=now;
			while(tree>x&&one>z&&two<y){
				tree--; one--; two+=2;
			}
			while(two<y&&one<z){
				tree--;
				two++; one++;
			}
			while(one<z){
				two--;
				one+=2;
			}
			x=max(x,tree);
			y=max(y,two);
			z=max(z,one);
		cout<<x<<" "<<y<<" "<<z<<endl;
			las=a[i];
		}
//		for(int i=n;i>=1;--i){
//			int now=a[i];
//			int tree=now/3;
//			now%=3;
//			int two=now/2;
//			now%=2;
//			int one=now;
////			if(two>y&&one>z){
////				int min_now=min(two-y,one-z);
////				two-=min_now;
////				one-=min_now;
////				tree+=min_now;
////			}
//			x=max(x,tree);
//			y=max(y,two);
//			z=max(z,one);
//		}
		cout<<x+y+z<<endl;
	}
	return 0;
}
