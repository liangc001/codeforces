#include<bits/stdc++.h>
using namespace std;

#define maxn 2020

int t;
int n;
char s[maxn];

signed main(){
	cin>>t;
	while(t--){
		cin>>n;
		cin>>s;
		cin>>s;
		bool flag=0;
		for(register int i=0;i<n;++i){
			if(s[i]=='o'){
				cout<<"YES"<<endl; flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
