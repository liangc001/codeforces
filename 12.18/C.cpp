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

#define maxn 2010
int n,k;
int cnt,la;
int x,a[maxn],ans[maxn];
int sum;
string s;
int f;

signed main() {
	int t=read();
	while(t--){
		n=read(); k=read(); x=read();
		cin>>s;
		cnt=1;
		sum=1;
		f=0;
		for(int i=0;i<=n;++i) a[i]=1;
		memset(ans,0,sizeof(ans));
		for(int i=0;i<n;++i){
			if(s[i]=='*'){
				a[cnt]+=k;
				f=1;
			}
			else if(f==1){
				++cnt;
				f=0;
			}
		}
		if(a[cnt]==1) cnt--;
		for(int i=cnt;i>=1;--i){
			if(sum>=x/a[i]+(x%a[i]!=0)){
				la=i; break;
			}
			sum*=a[i];
		}
		for(int i=la;i<=cnt;++i){
			for(int j=1;j<=a[i];++j){
				if(sum>=(x/j+(x%j!=0))){
					ans[i]=j-1;
					x-=sum*(j-1);
					sum/=a[i+1];
					break;
				}
			}
		}
		cnt=1;
		f=0;
		for(int i=0;i<n;++i){
			if(s[i]=='*'){
				if(f==0){
					for(int j=1;j<=ans[cnt];++j){
						cout<<"b";
					}
					f=1;
				}
			}
				else{
					if(f==1){
						f=0;
						++cnt;
					}
					cout<<"a";
				}
		}
		cout<<endl;
	}
	return 0;
}

