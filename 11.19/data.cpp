#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

signed main(){
	srand(time(0));
	int n=rand()%1000; cout<<n<<endl;
	for(int i=1;i<=n;++i){
		int len=rand()%1000;
		for(int i=1;i<=len;++i){
			int t=rand()%26+'a';
			cout<<(char)t;
		}
		cout<<endl;
	}
	return 0;
}
