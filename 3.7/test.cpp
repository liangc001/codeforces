#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 63
int xx[maxn],yy[maxn];
int mx[5]={0,1,-1,0,0};
int step,cnt;
bool vis[10][10];
int my[5]={0,0,0,1,-1};

inline void dfs(int x,int y,int st){
//	cout<<x<<" "<<y<<endl;
	if(x==8&&y==8){
		if(st==63){
			for(int i=1;i<=cnt;++i){
				cout<<xx[i]<<yy[i]<<" ";
			}
		}
		else{
			return ;
		}
	}
	vis[x][y]=1;
	for(int i=1;i<=4;++i){
		int nx=x+mx[i];
		int ny=y+my[i];
		if(nx<1||nx>8||ny<1||ny>8||vis[nx][ny]==1) continue;
		xx[++cnt]=nx; yy[cnt]=ny;
		dfs(nx,ny,st+1);
		vis[nx][ny]=0;
		cnt--;
	}
}

signed main(){
	dfs(1,1,0);
}
