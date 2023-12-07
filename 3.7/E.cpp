#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

struct ok{
	string s;
}p[100];

signed main(){
p[51].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 h8";
p[52].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 h8";
p[53].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 c8 h8";
p[54].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 c8 d8 h8";
p[55].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 c8 d8 e8 h8";
p[56].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 c8 d8 e8 f8 h8";
p[57].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 c8 d8 e8 f8 g8 h8";
p[58].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 c8 d8 e8 e7 f7 f8 h8";
p[59].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 c8 d8 e8 e7 f7 f8 g8 h8";
p[60].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 c8 c7 d7 d8 e8 e7 f7 f8 h8";
p[61].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 c8 d8 d7 e7 e8 f8 f7 g7 h7 h8";
p[62].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 b7 c7 c8 d8 e8 f8 f7 h7 g7 g8 h8";
p[63].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 c8 c7 d7 d8 e8 e7 f7 f8 g8 g7 h7 h8";
p[64].s="a1 b1 c1 d1 e1 f1 g1 h1 h2 g2 f2 e2 d2 c2 b2 a2 a3 b3 c3 d3 e3 f3 g3 h3 h4 g4 f4 e4 d4 c4 b4 a4 a5 b5 c5 d5 e5 f5 g5 h5 h6 g6 f6 e6 d6 c6 b6 a6 a7 a8 b8 b7 c7 c8 d8 d7 e7 e8 f8 f7 h7 g7 g8 h8";

	int n=read();
	n++;
	if(n<=50){
	int cnt=0;
	
	int x=0,y=0;
	for(int i=1;i<=8;++i){
		if(i%2==1){
			for(int j=1;j<=8;++j){
				cout<<(char)(j-1+'a')<<i<<" ";
				cnt++;
				if(cnt==n-2){
					x=i; y=j; break;
				}
			}
		}
		else{
			for(int j=8;j>=1;--j){
				cout<<(char)(j-1+'a')<<i<<" ";
				cnt++;
				if(cnt==n-2){
					x=i;y=j; break;
				}
			}
		}
		if(cnt==n-2) break;
	}
	if(y!=8){
		cout<<(char)(y-1+'a')<<8<<" ";
	}
	else{
		cout<<(char)(y-1+'a')<<x+1<<" ";
	}
	cout<<"h8";
}
else{
	cout<<p[n].s<<endl;
}
	return 0;
}
