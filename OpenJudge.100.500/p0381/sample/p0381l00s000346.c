#include<stdio.h>

int main() {
	int n, x;
	int i, j, k;
	int cnt;

	while (1) {
		scanf("%d %d", &n, &x);

		if (n == 0 && x == 0) {
			break;
		}

		cnt = 0;
		for (i = 1; i <= n; i++) {
			for (j = i + 1; j <= n; j++) {
				if (i != j) {
					for (k = j + 1; k <= n; k++) {
						if (i != k && j != k) {
							if ((i + j + k) == x) {
								cnt++;
							}
						}
					}
				}
			}
		}
		printf("%d\n", cnt);
	}

	return 0;
}
