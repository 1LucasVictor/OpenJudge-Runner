#include <stdio.h>

int main () {
	int i, j, n, x, y, z;
	int m[200][200] = { 0 };

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		scanf("%d", &y);

		for (j = 0; j < y; j++) {
			scanf("%d", &z);
			m[x - 1][z - 1]++;
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d", m[i][j]);

			if (j != n - 1) {
				putchar(' ');
			}
		}
		putchar('\n');
	}

	return 0;
}
