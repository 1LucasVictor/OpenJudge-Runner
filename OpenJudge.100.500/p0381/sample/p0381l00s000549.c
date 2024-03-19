
#include <stdio.h>

int main(void) {
	int n, x;
	while (scanf("%d%d", &n, &x) == 2 && (n|x) != 0) {
		int i, j;
		int count = 0;
		for (i = 1; i <= n; i++) {
			for (j = i + 1; j <= n; j++) {
				int k = x - i - j;
				if (j < k && k <= n) count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
