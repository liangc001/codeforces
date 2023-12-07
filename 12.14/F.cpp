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

unsigned int fun(unsigned x){
 	int sum=0;
 	int cnt=1;
 	while(x){
 		int now=x%2;
 		sum+=cnt*now;
 		cnt*=2;
 		x/=2;
	 }
	 return sum;
 }
 
 bool flag=0;
 int y;
 struct OKO{
 	int s[65];
 	int cn;
 }s[5];
 int cnt;
 int b[65],bb[65];
 int cnt_b;
 
 inline void dfs(int x,int sum){
 	//cout<<x<<endl;
 	if(sum>3) return;
 	if(sum!=0){
 		int now=x;
 		int ko[65],cny=0;
 		cnt++;
 		while(now){
 			int ts=now%2;
 			ko[++cny]=ts;
 			now/=2;
		 }
		 bool f=0;
		 for(int i=1;i<=cny;++i){
		 	if(ko[i]==1) f=1;
		 	if(f==1)s[cnt].s[++s[cnt].cn]=ko[i];
		 }
	}
 	dfs(fun(x*2),sum+1);
 	dfs(fun(x*2+1),sum+1);
 }
 
 signed main(){
 	int x=read();
 	y=read();
 	if(x==y){
 		cout<<"YES"<<endl;
 		return 0;
	 }
 	dfs(x,0);
 	while(y){
 		bb[++cnt_b]=y%2; y/=2;
	 }
	 for(int i=1;i<=cnt;++i){
	 	for(int j=1;j<=s[i].cn;++j){
	 		cout<<s[i].s[j];
		 }
		 cout<<endl;
	 }
	 //for(int i=1;i<=cnt_b;++i) b[i]=bb[cnt_b-i+1];
	 for(int i=1;i<=cnt;++i){
	 	for(int j=1;j<=cnt_b;++j){
	 		
		 }
	 }
 	if(flag==1){
 		cout<<"YES"<<endl;
	 }
	 else{
	 	cout<<"NO"<<endl;
	 }
 }
