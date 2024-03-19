#include <stdio.h>

int main(void) {
	int x, n;
	int i, j, k;
	int count = 0;

	scanf("%d %d", &n, &x);

	while (1) {
		if (x == 0 && n == 0) {
			break;
		}
		for (i = 1; i <= n - 2; i++) {
			for (j = i + 1; j <= n - 1; j++) {
				for (k = j + 1; k <= n; k++) {

					if (i + j + k == x && i != j && j != k && k != i) {
						count++;

					}
				}
			}
		}
		printf("%d\n", count);
		count = 0;
		scanf("%d %d", &n, &x);
	}

	return 0;
}

