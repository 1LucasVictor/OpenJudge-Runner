#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0;
	int m = 0;
	int l = 0;
	scanf("%d %d %d", &n, &m, &l);

	int a[100][100] = { 0 };
	int b[100][100] = { 0 };

	for (int x = 0; x < n; x++) {
		for (int y = 0; y < m; y++) {
			scanf("%d", &a[x][y]);			
		}
	}
	for (int x = 0; x < m; x++) {
		for (int y = 0; y < l; y++) {
			scanf("%d", &b[x][y]);
		}
	}

	long long int c[100][100] = { 0 };
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < l; y++) {
			for (int z = 0; z < m; z++) {
				c[x][y] += a[x][z] * b[z][y];
			}
		}
	}

	for (int x = 0; x < n; x++) {
		for (int y = 0; y < l; y++) {
			printf("%d", c[x][y]);
			
			if (y == l - 1) {
				printf("\n");
			}
			else {
				printf(" ");
			}
		}
		
	}

	return 0;
}