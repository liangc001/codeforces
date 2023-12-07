#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t,n;
int l,r;
int a[18]={0,6,2,5,5,4,5,6,3,7,6};
int maxa[10]={-1,-1,1,7,4,5,9,8};
int mina[10]={-1,-1,1,7,4,2,0,8};
//2,3,4,5,6,7
signed main(){
	t=read();
	while(t--){
		n=read();
		int yu1=n%7;
		int kk1=n/7;
		if(yu1!=0&&yu1!=1&&yu1!=6)cout<<mina[yu1];
		if(yu1==1){
			cout<<"44";
			kk1--;
		}
		else if(yu1==6){
			cout<<"6";
		} 
		for(register int i=1;i<=kk1;++i){
			cout<<"8";
		}
		
		cout<<" ";
		//da
		int yu=n%2;
		int kk=n/2;
		for(register int i=1;i<=kk-1;++i){
			cout<<"1";
		}
		if(yu==1){
			cout<<"7";
		}
		else cout<<"1";
		cout<<endl;
	}
}
