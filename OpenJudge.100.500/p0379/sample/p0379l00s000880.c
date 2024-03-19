#include <stdio.h>

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n][m], b[m], c[n];
	for (int i = 0; i < n; i++) {
		c[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int j = 0; j < m; j++) {
		scanf("%d", &b[j]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i] += a[i][j] * b[j];
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", c[i]);
	}
	return 0;
}

