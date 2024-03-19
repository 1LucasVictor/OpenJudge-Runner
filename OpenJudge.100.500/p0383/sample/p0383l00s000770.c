#include<stdio.h>

int main(void) {
	int n, m, l;
	int i, j, k;
	int a[100][100], b[100][100];
	double c[100][100] = { 0 };

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
			if (k != 0) printf(" ");
			printf("%.0f", c[i][k]);
		}
		puts("");
	}
	return 0;
}
