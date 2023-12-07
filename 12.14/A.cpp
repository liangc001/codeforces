#include<bits/stdc++.h>

#define maxn 210
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
int n,m;
int a[maxn];

signed main(){
	t=read();
	while(t--){
		for(int i=1;i<=7;i++){
			a[i]=read();
		}
		sort(a+1,a+8);
		cout<<a[1]<<" ";
		cout<<a[2]<<" ";
		cout<<a[7]-a[1]-a[2]<<endl;
	}
	return 0;
}
