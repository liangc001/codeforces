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
int n;
char s[110][5];

signed main(){
	t=read();
	while(t--){
		int cnt=0;
		n=read();
		for(int i=1;i<=n-2;++i){
			cin>>s[i];
		}
		s[n-1][0]=0;
		for(int i=1;i<=n-2;++i){
			if(s[i][1]==s[i+1][0]){
				cout<<s[i][0]; cnt++;
			}
			else{
				cout<<s[i][0];
				cout<<s[i][1];
				cnt+=2;
			}
		}
		if(cnt<n){
			cout<<s[n-2][1];
		}
		cout<<endl;
	}
	return 0;
}
