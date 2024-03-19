#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, m, n, **A, *v, c;

	scanf("%d %d", &n, &m);
	A = (int **)malloc(sizeof(int *) * n);
	for (i = 0; i < n; i++) {
		A[i] = (int *)malloc(sizeof(int) * m);
	}
	v = (int *)malloc(sizeof(int) * m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	for (i = 0; i < m; i++) {
		scanf("%d", &v[i]);
	}

	for (i = 0; i < n; i++) {
		c = 0;
		for (j = 0; j < m; j++) {
			c += A[i][j] * v[j];
		}
		printf("%d\n", c);
	}

	return 0;
}

