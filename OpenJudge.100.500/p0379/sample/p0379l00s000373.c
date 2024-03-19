#include <stdio.h>

int main(void)
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);

	int A[n][m];
	int b[m];

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			int a_ij;
			scanf("%d", &a_ij);
			A[i][j] = a_ij;
		}
	}

	for (i = 0; i < m; i++) {
		int b_i;
		scanf("%d", &b_i);
		b[i] =b_i;
	}

	for (i = 0; i < n; i++) {
		int c_i = 0;
		for (j = 0; j < m; j++) {
			c_i += A[i][j] * b[j];
		}
		printf("%d\n", c_i);
	}

	return 0;
}