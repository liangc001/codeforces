#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

queue<int> q;

signed main(){
	srand(time(0));
	ios::sync_with_stdio(false);
	int t=read();
	while(t--){
		while(!q.empty()) q.pop();
		int n=read();
		int g=0,b=0,gg=0,bb=0,ggg=0,bbb=0;
		while(1){
			if(g) break;
			int a=rand()%n+1;
			int b=rand()%n+1;
			while(b==a){
				b=rand()%n+1;
			}
			int c=rand()%n+1;
			while(a==c||b==c){
				c=rand()%n+1;
			}
			cout<<"? "<<a<<" "<<b<<" "<<c<<endl;
			int f=read();
			if(f==0){
				g=a; gg=b; ggg=c; break;
			}
		}
		while(1){
			if(b) break;
			int cnt=rand()%3+1;
			int a;
			if(cnt==1){
				a=g;
				int b=rand()%n+1;
				while(b==a||b==gg||b==ggg){
					b=rand()%n+1;
				}
				int c=rand()%n+1;
				while(c==a||c==b||c==gg||c==ggg){
					c=rand()%n+1;
				}
				cout<<"? "<<a<<" "<<b<<" "<<c<<endl;
				int f=read();
				if(f==1){
					b=a; bb=b; bbb=c; break;
				}
			}
			else if(cnt==2){
				a=gg;
				int b=rand()%n+1;
				while(b==a||b==g||b==ggg){
					b=rand()%n+1;
				}
				int c=rand()%n+1;
				while(c==a||c==b||c==g||c==ggg){
					c=rand()%n+1;
				}
				cout<<"? "<<a<<" "<<b<<" "<<c<<endl;
				int f=read();
				if(f==1){
					
					b=a; bb=b; bbb=c; break;
				}
			}
			else{
				a=ggg;
				int b=rand()%n+1;
				while(b==a||b==gg||b==g){
					b=rand()%n+1;
				}
				int c=rand()%n+1;
				while(c==a||c==b||c==gg||c==g){
					c=rand()%n+1;
				}
				cout<<"? "<<a<<" "<<b<<" "<<c<<endl;
				int f=read();
				if(f==1){
					b=a; bb=b; bbb=c; break;
				}
			}
		}
		while(1){
			if(g&&b) break;
			
		}
		q.push(b);
		for(int i=1;i<=n;++i){
			if(i==g||i==b) continue;
			cout<<"? "<<g<<" "<<b<<" "<<i<<endl;
			int flag=read();
			if(flag==0){
				q.push(i);
			}
		}
		cout<<"! ";
		cout<<q.size()<<" ";
		while(!q.empty()){
			cout<<q.front()<<" ";
			q.pop();
		}
	}
	return 0;
}
