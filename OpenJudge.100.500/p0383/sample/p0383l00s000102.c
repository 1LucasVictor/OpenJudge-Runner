#include <stdio.h>

int main(void)
{
	int n, m, l, i, j, k, e;
	long c_ij;

	scanf("%d %d %d", &n, &m, &l);

	int A[n][m];
	int B[m][l];

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &e);
			A[i][j] = e;
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++) {
			scanf("%d", &e);
			B[i][j] = e;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			c_ij = 0;
			for (k = 0; k < m; k++) {
				c_ij += A[i][k] * B[k][j];
			}
			printf("%ld", c_ij);
			if (j != l - 1) putchar(' ');
		}
		putchar('\n');
	}

	return 0;
}