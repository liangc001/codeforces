#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int n, m, cnt;
char a[N][N];

struct w {
	int a, b, c, d;
} ans[N * N * 2];

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		cnt = 0;
		scanf("%d%d", &n, &m);
		for (int i = 1; i <= n; i++)
			scanf("%s", a[i] + 1);
		if (a[1][1] == '1') {
			printf("-1\n");
			continue;
		}
		int ok = 0;
		for (int i = n; i >= 1; i--) {
			for (int j = m; j >= 2; j--)
				if (a[i][j] == '1')
					ans[++cnt].a = i, ans[cnt].b = j - 1, ans[cnt].c = i, ans[cnt].d = j;
			if (a[i][1] == '1')
				ans[++cnt].a = i - 1, ans[cnt].b = 1, ans[cnt].c = i, ans[cnt].d = 1;
		}
		printf("%d\n", cnt);
		for (int i = 1; i <= cnt; i++) {
			printf("%d %d %d %d\n", ans[i].a, ans[i].b, ans[i].c, ans[i].d);
		}
	}
}
