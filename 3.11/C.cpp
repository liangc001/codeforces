#include <bits/stdc++.h>
#define N 105
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

struct w {
	int a, b, c, d;
} ans[N * N * 2];
int n, m, cnt;
char a[N][N];

signed main() {
	int t=read();
	while (t--) {
		cnt = 0;
		n=read(); m=read();
		for (int i = 1; i <= n; i++)
			scanf("%s", a[i] + 1);
		if (a[1][1] == '1') {
			printf("-1\n");
			continue;
		}
		int ok = 0;
		for (int i = n; i >= 1; i--) {
			for (int j = m; j >= 2; j--){
				if (a[i][j] == '1'){
					ans[++cnt].a = i, ans[cnt].b = j - 1, ans[cnt].c = i, ans[cnt].d = j;
				}
			}
			if (a[i][1] == '1'){
				ans[++cnt].a = i - 1, ans[cnt].b = 1, ans[cnt].c = i, ans[cnt].d = 1;
			}
		}
		cout<<cnt<<endl;
		for (int i = 1; i <= cnt; i++) {
			cout<<ans[i].a<<" "<<ans[i].b<<" "<<ans[i].c<<" "<<ans[i].d<<endl;
		}
	}
	return 0;
}
