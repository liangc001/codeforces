#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 100
int t;
string s;

signed main(){
	t=read();
	while(t--){
		cin>>s;
		bool f_c=0;
		bool f_e=0,f_p=0,f_z=0;
		bool flag=0;
		for(int i=0;i<s.size();++i){
			if(s[i]=='c'){
				f_c=1;
				if(f_e==0||f_p==0||f_z==0) flag=1;
			}
			else if(s[i]=='e'){
				f_e=1;
				if(f_c==1) flag=1;
			}
			else if(s[i]=='p'){
				f_p=1;
				if(f_c==1||f_z==0) flag=1;
			}
			else if(s[i]=='z'){
				f_z=1;
				if(f_p==1||f_c==1) flag=1;
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
} 
