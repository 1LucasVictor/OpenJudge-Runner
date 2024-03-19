#include <stdio.h>

int main(void) {
	int n, x;
	long int dp[5000];
	long int max;
	int i, j;

	while (1) {
		scanf("%d", &n);
		if (n == 0) break;

		for (i = 0; i < n; i++){
			scanf("%d", &x);
			if (i == 0) {
				dp[i] = x;
			} else {
				if ((dp[i - 1] + x) > x) {
					dp[i] = dp[i - 1] + x;
				}
				else {
					dp[i] = x;
				}
			}
		}
		max = dp[0];
		for (j = 0; j < i; j++) {
			if (dp[j] > max) max = dp[j];
		}
		printf("%d\n", max);
	}

	return (0);
}