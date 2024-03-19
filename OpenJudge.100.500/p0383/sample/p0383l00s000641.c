#include <stdio.h>

int main(void) {
	int n, m, l;
	int a[100][100] = { 0 };
	int b[100][100] = { 0 };
	int c[100][100] = { 0 };
	int i, j, k;

	scanf("%d %d %d", &n, &m, &l);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (j = 0; j < m; j++) {
		for (k = 0; k < l; k++) {
			scanf("%d", &b[j][k]);
		}
	}

	for (i = 0; i < n; i++) {
		for (k = 0; k < l; k++) {
			for (j = 0; j < m; j++) {
				c[i][k] += a[i][j] * b[j][k];
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (k = 0; k < l; k++) {
			printf("%d", c[i][k]);
			if (k + 1 < l) {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
