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

int t;
int p1,p2;
char x1[maxn],x2[maxn];

signed main(){
	t=read();
	while(t--){
		memset(x1,0,sizeof(x1));
		memset(x2,0,sizeof(x2));
		cin>>x1; p1=read();
		cin>>x2; p2=read();
		int len1=strlen(x1)+p1;
		int len2=strlen(x2)+p2;
		if(len1>len2){
			cout<<">"<<endl;
			continue;
		}
		else if(len1<len2){
			cout<<"<"<<endl;
			continue;
		}
		else{
			bool flag=0;
			for(int i=0;i<max(strlen(x1),strlen(x2));++i){
				if(x1[i]=='\0') x1[i]='0';
				if(x2[i]=='\0') x2[i]='0';
				if((int)x1[i]>(int)x2[i]){
					flag=1;
					cout<<">"<<endl;
					break;
				}
				else if((int)x1[i]<(int)x2[i]){
					flag=1;
					cout<<"<"<<endl;
					break;
				}
			}
			if(flag==0)cout<<"="<<endl;
		}
	}
	return 0;
}
