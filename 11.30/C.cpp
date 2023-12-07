#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 1000010
int n;
string s;
bool vis[maxn];
int sum;

signed main(){
	n=read();
	for(int i=1;i<=n;++i){
		sum=0;
		cin>>s;
		if(s[0]=='-') continue;
		if(s.size()>7){
			continue;
		}
		for(int i=0;i<s.size();++i){
			sum=sum*10+s[i]-48;
		}
		if(sum>1000000) continue;
		vis[sum]=1;
	}
	for(int i=0;i<=1000000;++i){
		if(vis[i]==0){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
