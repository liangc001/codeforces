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
int n;
struct S{
	char s[50]; int l;int r;
}t[maxn];
bool flag=0;
struct EDGE{
	int nex,to;
}edge[maxn];
bool vis[maxn];
int head[maxn],cnt;

inline void dfs(int be,int now_end,int sum){
	if(((sum==cnt)&&(now_end==be))||flag==1){
		flag=1; return;
	}
	vis[now_end]=1;
	for(int i=head[now_end];i;i=edge[i].nex){
		int v=edge[i].to;
		if(v==now_end) vis[v]=0;
		if(vis[v]==1) continue;
		dfs(be,v,sum+1);
		vis[v]=0;
	}
}

inline void add(int u,int v){
	edge[++cnt].to=v;
	edge[cnt].nex=head[u];
	head[u]=cnt;
}

signed main(){
	n=read();
	for(int i=1;i<=n;++i){
		cin>>t[i].s; int l,r;
		for(int j=0;j<strlen(t[i].s);++j){
			if(j==0) l=(int)(t[i].s[j]-'a'+1); r=(int)(t[i].s[j]-'a'+1);
		}
		t[i].l=l; t[i].r=r; add(l,r);
	}
	for(int i=1;i<=n;++i){
		memset(vis,0,sizeof(vis));
		if(flag==1) break; flag=0;
		dfs(t[i].s[0]-'a'+1,t[i].s[strlen(t[i].s)-1]-'a'+1,1);
	}
	
	if(flag==1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
