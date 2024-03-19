#include <stdio.h>
int main(void) {
	int x, i = 0, a, sum[1000] = {0};

	while (1) {
		scanf("%d", &x);

		if (x == 0) {
			break;
		}

		while (x) {
			sum[i] += x % 10;
			x /= 10;
		}
		i++;
	}

	for (a = 0; a < i; a++) {
		printf("%d\n", sum[a]);
	}
	return 0;
}