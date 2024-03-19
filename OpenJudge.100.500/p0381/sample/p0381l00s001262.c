#include <stdio.h>

int main(void)
{
	int n, x, i, j, k, s, t, S;

	for (;;) {
		S = 0;
		scanf("%d %d", &n, &x);
		if (n ==0 && x == 0) return 0;
		for (i = 1; i <= n; i++) {
			for (j = i + 1; j <= n; j++) {
				for (k = j + 1; k <= n; k++) {
					t = i + j + k;
					if (t == x) {
						S++;
					}
				}
			}
		}
		printf("%d\n", S);
	}

	return 0;
}

