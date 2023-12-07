#include<bits/stdc++.h>
inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define N 100009
#define M 209
using namespace std;
int n,a[N],pos[N][M],dp[N][M],ans;
int l=0x3f3f3f3f,r=0;
int main(){
	n=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		l=min(l,a[i]);
		r=max(r,a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=100;j++) pos[i][j]=pos[i-1][j];
		pos[i][a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=2*l;j<=2*r;j++){
			dp[i][j]=dp[i-1][j];
			if(j>a[i]&&pos[i-1][j-a[i]]>0) dp[i][j]=max(dp[i][j],dp[pos[i-1][j-a[i]]-1][j]+1);
		}
	}
	for(int i=2*l;i<=r*2;i++)
	    ans=max(ans,dp[n][i]);
	cout<<ans*2;
	return 0;
}
