/*#include <stdio.h>
int main() {
	//freopen("in.txt","r",stdin);
	int n, m, x1, y1, x2, y2, i, j, k, n2, temp, total;
	while (scanf("%d%d", &n, &m) != EOF) {
		int sum[n + 1][n + 1];
		for (i = 0; i <= n; i++) { sum[0][i] = 0; sum[i][0] = 0; }
		for (i = 1; i <= n; i++)
			scanf("%d", &temp), sum[1][i] = sum[1][i - 1] + temp;
		for (i = 2; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				scanf("%d", &temp);
				sum[i][j] = sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1] + temp;
			}
		}
		for (i = 0; i < m; i++) {
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			//printf("%d %d %d %d ",x1,y1,x2,y2);
			total = sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] + sum[x1 - 1][y1 - 1];
			printf("%d\n", total);
		}
	}

}*/