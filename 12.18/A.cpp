#include <bits/stdc++.h>
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

string s;

signed main(){
	int t=read();
	while(t--){
		cin>>s;
//		if(s.size()==1){
//			cout<<"YES"<<endl;
//			continue;
//		}
		int num=0;
		for(int i=0;i<s.size();++i){
			if(s[i]=='N') num++;
		}
		if(num==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
