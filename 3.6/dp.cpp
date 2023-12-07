#include <bits/stdc++.h>
#include<windows.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}


signed main(){
	while(1){
		system("test.exe > test.txt");
		system("E.exe < test.txt > E.txt");
		system("E2.exe < test.txt > E2.txt");
		if(system("fc E.txt E2.txt")) break;
	}
	return 0;
}
