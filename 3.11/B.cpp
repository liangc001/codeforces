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
int t;
int a[maxn][maxn];

signed main(){
	t=read();
	while(t--){
		int n=read(); int m=read();
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;++i){
			string s;
			cin>>s;
			for(int j=0;j<s.size();++j){
				a[i][j+1]=(int)(s[j]-'0');
			}
		}
		bool flag=0;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				if(a[i][j]==1){
					if(a[i-1][j]==1&&a[i-1][j-1]==1&&a[i-1][j+1]==1&&(a[i][j-1]==0||a[i][j+1]==0)){
						flag=1; break;
					}
					if(a[i+1][j]==1&&a[i+1][j-1]==1&&a[i+1][j+1]==1&&(a[i][j-1]==0||a[i][j+1]==0)){
						flag=1; break;
					}
					if(a[i][j+1]==1&&a[i-1][j+1]==1&&a[i+1][j+1]==1&&(a[i-1][j]==0||a[i+1][j]==0)){
						flag=1; break;
					}
					if(a[i][j-1]==1&&a[i-1][j-1]==1&&a[i+1][j-1]==1&&(a[i-1][j]==0||a[i+1][j]==0)){
						flag=1; break;
					}
					if(a[i-1][j]==1&&(a[i-1][j-1]==1||a[i-1][j+1]==1)&&a[i][j-1]==0&&a[i][j+1]==0){
						flag=1; break;
					}
					if(a[i+1][j]==1&&(a[i+1][j-1]==1||a[i+1][j+1]==1)&&a[i][j-1]==0&&a[i][j+1]==0){
						flag=1; break;
					}
					if(a[i][j+1]==1&&(a[i-1][j+1]==1||a[i+1][j+1]==1)&&a[i-1][j]==0&&a[i+1][j]==0){
						flag=1; break;
					}
					if(a[i][j-1]==1&&(a[i-1][j-1]==1||a[i+1][j-1]==1)&&a[i-1][j]==0&&a[i+1][j]==0){
						flag=1; break;
					}
				}
			}
			if(flag==1){
				break;
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
