#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b, k, i, j;

	scanf("%d %d", &a, &b);

	for (k = 0; k < 1000000000; k++) {
		i = abs(a - k);
		j = abs(k - b);
		if (i == j) {
			printf("%d\n", k);
			return 0;
		}
	}

	printf("IMPOSSIBLE\n");

	return 0;
}
