#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 25
int n,m;
int a[maxn][maxn];
int b[maxn][maxn];
char ans[50010];
bool vis[maxn][maxn];
int cnt;

signed main(){
	srand(time(0));
	n=read();m=read();
	for(int i=1;i<=n;++i){
		string s;
		cin>>s; s=' '+s;
		for(int j=1;j<=m;++j){
			a[i][j]=s[j];
			if(a[i][j]=='1'){
				vis[i][j]=1;
			}
		}
	}
	while(1){
		int x=rand()%4;
		if(x==1){
			for(int i=1;i<=n;++i){
				for(int j=1;j<=m;++j){
					if(a[i][j]=='1'&&vis[i-1][j]==1){
						b[i-1][j]='1';
					}
					else if(a[i][j]=='1'){
						b[i][j]='1';
					}
				}
			}ans[++cnt]='U';
		}
		else if(x==2){
			for(int i=1;i<=n;++i){
				for(int j=1;j<=m;++j){
					if(a[i][j]=='1'&&vis[i+1][j]==1){
						b[i+1][j]='1';
					}
					else if(a[i][j]=='1'){
						b[i][j]='1';
					}
				}
			}ans[++cnt]='D';
		}
		else if(x==3){
			for(int i=1;i<=n;++i){
				for(int j=1;j<=m;++j){
					if(a[i][j]=='1'&&vis[i][j-1]==1){
						b[i][j-1]='1';
					}
					else if(a[i][j]=='1'){
						b[i][j]='1';
					}
				}
			}ans[++cnt]='L';
		}
		else{
			for(int i=1;i<=n;++i){
				for(int j=1;j<=m;++j){
					if(a[i][j]=='1'&&vis[i][j+1]==1){
						b[i][j+1]='1';
					}
					else if(a[i][j]=='1'){
						b[i][j]='1';
					}
				}
			}ans[++cnt]='R';
		}
		int sum=0;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				if(b[i][j]=='1'){
					sum++;
				}
				if(b[i][j]=='1'){
					a[i][j]='1';
				}
				else{
					a[i][j]='0';
				}
				b[i][j]='0';
			}
		}
		if(sum==1){
			break;
		}
	}
	for(int i=1;i<=cnt;++i){
		printf("%c",ans[i]);
	}
	return 0;
}
