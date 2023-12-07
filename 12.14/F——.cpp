#include<bitsdc++.h>
#define int long long 
#define maxn 110
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int cnta,cntb,p,flag;
int n,t,s[maxn];
int x,y;

string sy;
string a,b,c,d;

bool check(int l,int dst,int m){
	for(int i=0;i<=l-1;i++) if(sy[i]=='0') return 0;
	for(int i=l+dst;i<m;i++)if(sy[i]=='0') return 0;
	return 1;
}

signed main(){
	x=read(); y=read();
	while(x){
		s[++n]=x&1;
		x>>=1;
	}
	for(int i=n;i>=1;i--) a+=char(s[i]+'0'),cnta++; a+='1';cnta++;b+='1';
	for(int i=1;i<=n;i++) b+=char(s[i]+'0');
	for(int i=1;i<=n;i++){
		if(s[i]==1){
			p=i;
			break;
		}
	}
	for(int i=n;i>=p;i--) c+=char(s[i]+'0'),cntb++;
	for(int i=p;i<=n;i++) d+=char(s[i]+'0');
	while(y){
		int t=y&1;
		sy+=char(t+'0');
		y>>=1;
	}
	for(int i=0;i<sy.size();i++){
		if(i+cnta<=sy.size()){
			string s1=sy.substr(i,cnta);
			if(s1==a) if(check(i,cnta,sy.size())) flag=1;
			if(s1==b) if(check(i,cnta,sy.size())) flag=1;
		}
		if(i+cntb<=sy.size()){
			string s1=sy.substr(i,cntb);
			if(s1==c) if(check(i,cntb,sy.size())) flag=1;
			if(s1==d) if(check(i,cntb,sy.size())) flag=1;
		}
		if(flag) break;
	}
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
