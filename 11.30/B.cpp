#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 200010
int n;
int cnt;
map<string,int>mp;
string s;
int sum,ans[maxn];
map<int,string>mpp;
bool flag=0;

signed main(){
	n=read();
	for(int i=1;i<=n;++i){
		cin>>s;
		if(mp[s]==0)mp[s]=++cnt,mpp[cnt]=s,ans[cnt]++;
		else{
			ans[mp[s]]++;
		}
		sum++;
	}
	for(int i=1;i<=cnt;++i){
		if(sum-ans[i]<ans[i]){
			flag=1; cout<<mpp[i]<<endl;
		}
	}
	if(flag==0){
		cout<<"NONE"<<endl;
	}
	return 0;
}
