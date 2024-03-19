#include <stdio.h>

int main() {

	int n, m, i, j;
	int a, b;
	int A[100][100] = { 0 };
	int B[100] = { 0 };
	int c[100] = { 0 };

	scanf("%d %d ", &n, &m);

	for (i = 0; i<n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a);
			A[i][j] = a;
		}
	}

	for (i = 0; i<m; i++) {
		scanf("%d", &b);
		B[i] = b;
	}

	for (i = 0; i<n; i++) {
		for (j = 0; j<m; j++) {
			c[i] = c[i] + A[i][j] * B[j];
		}
	}

	for (j = 0; j<n; j++) {
		printf("%d\n", c[j]);
	}
	return 0;
}
