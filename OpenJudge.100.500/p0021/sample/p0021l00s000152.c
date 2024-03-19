#include <stdio.h>
#include <limits.h>

#define MAX 5000

int main(void) {
	int n, d[MAX];
	int sum, max;
	int i, j;

	while (scanf("%d", &n) != EOF) {
		if (n == 0) break;

		for (i = 0; i < n; i++)
			scanf("%d", &d[i]);

		max = INT_MIN;
		for (i = 0; i < n; i++) {
			sum = 0;
			for (j = i; j < n; j++) {
				sum += d[j];
				if (max < sum) max = sum;
			}
		}
		printf("%d\n", max);
	}
	return 0;
}