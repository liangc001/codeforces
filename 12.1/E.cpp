#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 10010
int t;
int n,m;
string s;
char mp[maxn][maxn];
int x,y;
int mx[5]={0,1,-1,0,0};
int my[5]={0,0,0,1,-1};

inline void dfs(int x,int y,bool k){
	for(int i=1;i<=4;++i){
		int nx=x+mx[i];
		int ny=y+my[i];
		//cout<<nx<<" "<<ny<<" "<<mp[nx][ny]<<endl;
		if(mp[nx][ny]=='#'||ny<1||nx>n||ny<1||ny>m||mp[nx][ny]=='L') continue;
		int flag=0;
		for(int i=1;i<=4;++i){
			if(mp[nx+mx[i]][ny+my[i]]=='.'||mp[nx+mx[i]][ny+my[i]]=='L'){
				flag++;
			}
		}
		if(flag==1){
			mp[nx][ny]='+';
			return;
		}
		else if(flag>2&&k==1){
			return;
		}
		else if(flag==2) dfs(nx,ny,1);
	}
		if(k==1){
			mp[x][y]='+';
			return;
		}
}

signed main(){
	t=read();
	while(t--){
		memset(mp,0,sizeof(mp));
		n=read(); m=read();
		for(int i=1;i<=n;++i){
			cin>>s;
			for(int j=0;j<s.size();++j){
				mp[i][j+1]=s[j];
				if(s[j]=='L'){
					x=i; y=j+1;
				}
			}
		}
		dfs(x,y,0);
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				cout<<mp[i][j];
			}
			cout<<endl;
		}
	}
}
