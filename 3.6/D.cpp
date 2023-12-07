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

int t;
int s1,s2;

signed main(){
	ios::sync_with_stdio(0);
	t=read();
	while(t--){
		s1=read(); s2=read();
		int now_a=s1,now_b=s2;
		int visa[15],visb[15];
		memset(visa,0,sizeof(visa));
		memset(visb,0,sizeof(visb));
		while(now_a){
//			cout<<now_a%10<<endl;
			visa[now_a%10]++;
			now_a/=10;
		}
		while(now_b){
//			cout<<now_b%10<<endl;
			visb[now_b%10]++;
			now_b/=10;
		}
		int now=__gcd(s1,s2);
		for(int i=now;i>=1;--i){
			if(s1%i==0&&s2%i==0){
				int a=s1/i,b=s2/i;
				int ansa=a,ansb=b;
				int na[15],nb[15];
				bool flag=0;
				memset(na,0,sizeof(na));
				memset(nb,0,sizeof(nb));
//				cout<<"a,b:"<<a<<" "<<b<<endl;
				while(a){
					na[a%10]++; a/=10;
				}
				while(b){
					nb[b%10]++; b/=10;
				}
				for(int i=0;i<10;++i){
//					cout<<"i: "<<i<<" "<<visa[i]<<" "<<na[i]<<" "<<visb[i]<<" "<<nb[i]<<endl;
					if(visa[i]-na[i]!=visb[i]-nb[i]){
						flag=1; break;
					}
				}
				if(flag==0){
					cout<<ansa<<" "<<ansb<<endl;
					break;
				}
			}
		}
		
	}
	return 0;
}
