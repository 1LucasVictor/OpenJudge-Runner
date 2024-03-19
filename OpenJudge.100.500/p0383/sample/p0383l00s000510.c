#include <stdio.h>

int main(void)
{
	int n, m, l, a[100][100], b[1000][100], c[100][100] = { 0 } , i, j, k;

	scanf("%d %d %d", &n, &m, &l);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++) {

			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			for (k = 0; k < l; k++) {

				c[i][k] += a[i][j] * b[j][k];
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			printf("%d", c[i][j]);

			if (j < l - 1)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
