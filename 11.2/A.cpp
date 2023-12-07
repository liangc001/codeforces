#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
string s1,s2;
map<char,int> mp;

signed main(){
	t=read();
	while(t--){
		mp.clear();
		int ans=0;
		cin>>s1>>s2;
		for(int i=0;i<s1.size();++i){
			mp[s1[i]]=i+1;
		}
		for(int i=1;i<s2.size();++i){
			ans+=abs(mp[s2[i]]-mp[s2[i-1]]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
