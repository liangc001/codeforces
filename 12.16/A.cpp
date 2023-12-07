#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int num[30];
string s;
string t;

signed main(){
	int k=read();
	while(k--){
		cin>>s>>t;
		memset(num,0,sizeof(num));
		for(int i=0;i<s.size();++i){
			num[s[i]-'a'+1]++;
		}
		bool flag=0;
//		cout<<t[0]<<endl<<t[1]<<endl<<t[2]<<endl;
		if(num[t[2]-'a'+1]&&num[t[0]-'a'+1]&&num[t[1]-'a'+1]&&t[0]=='a'&&t[1]=='b'&&t[2]=='c'){
			flag=1;
		}
		if(flag==1){
			for(int i=1;i<=num[1];++i){
				cout<<'a';
			}
			for(int i=1;i<=num[3];++i){
				cout<<'c';
			}
			for(int i=1;i<=num[2];++i){
				cout<<'b';
			}
			
			for(int i=4;i<=26;++i){
				for(int j=1;j<=num[i];++j){
					cout<<(char)('a'+i-1);
				}
			}
			cout<<endl;
			continue;
		}
//		cout<<"no"<<endl;
		for(int i=1;i<=26;++i){
			for(int j=1;j<=num[i];++j){
				cout<<(char)('a'+i-1);
			}
		}
		cout<<endl;
	}
	return 0;
}
