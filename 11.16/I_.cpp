#include <bits/stdc++.h>
#define maxn 10010
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int tri[maxn][30];
int n;
string s[maxn];
int cnt;
int vis[maxn];

inline void trige(int j){
	int k=0;
	for(int i=0;i<s[j].size();++i){
		if(tri[k][s[j][i]-'a']){
			k=tri[k][s[j][i]-'a'];
		}
		else{
			tri[k][s[j][i]-'a']=++cnt;
			k=tri[k][s[j][i]-'a'];
		}
	}
	vis[k]++;
}
bool flag=0;

inline void ask(int be){
	int sum=n-1;
	int vis_now[maxn];
	for(int i=1;i<=n;++i) vis_now[i]=vis[i];
	char now=s[be][s[be].size()-1];
	while(sum){
		if(!tri[0][now]) break;
		
		sum--;
	}
}

signed main(){
	n=read();
	for(int i=1;i<=n;++i){
		cin>>s[i];
		trige(i);
	}
	for(int i=1;i<=n;++i){
		flag=0;
		ask(i);
	}
}
