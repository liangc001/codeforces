#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 1010
int n,m;
int a[maxn][maxn];
int li[maxn],ha[maxn];
int ans;

signed main(){
	n=read(); m=read();
	memset(li,0x3f,sizeof(li));
	memset(ha,0x3f,sizeof(ha));
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			a[i][j]=read();
			li[j]=min(li[j],a[i][j]);
			ha[i]=min(ha[i],a[i][j]);
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(a[i][j]==ha[i]&&a[i][j]==li[j]){
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
