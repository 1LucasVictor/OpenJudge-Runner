#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int n, m, l;
	int i, j, k;
	int a[201][201] = { 0 }, b[201][201] = { 0 }, ans[201][201] = { 0 };

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
				ans[i][k] += a[i][j] * b[j][k];
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			printf("%d", ans[i][j]);
			if (j != (l - 1)) printf(" ");
		}
		printf("\n");
	}

	return 0;
}
