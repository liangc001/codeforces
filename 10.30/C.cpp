#include <bits/stdc++.h>
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
int n;
int a[maxn];

signed main(){
	t=read();
	while(t--){
		n=read();
		int cnt=1;
		bool flag_now=0;
		for(int i=1;i<=n;++i) a[i]=read();
		for(int i=1;i<=n;++i){
			bool flag=0;
			for(int j=i+1;j>i+1-cnt;--j){
				if(a[i]%j!=0){
					flag=1; cnt++;
					break;
				}
			}
			if(flag==0){
				flag_now=1;
				break;
			}
		}
		if(flag_now==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
