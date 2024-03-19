#include <stdio.h>

int main(void)
{
	int i,j,n,m,a[100][100],b[100],sum=0;

	scanf("%d%d", &n, &m);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
			/* 空白区切りで入力は無理 */
		}
	}

	for (i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			sum += a[i][j] * b[j];
		}
		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}
