#include <stdio.h>
int main() {
	int n, m, i, j, a[100][100] = { 0 }, b[100] = { 0 }, c[100] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (j = 0;j < m;j++) {
		scanf("%d", &b[j]);
	}
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++) {
			c[i] += a[i][j] * b[j];
		}
			printf("%d\n", c[i]);
    }
	return 0;
}