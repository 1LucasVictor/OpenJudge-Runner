#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int *x, *y;
	int i, n, d, count = 0;

	scanf("%d %d", &n, &d);

	x = (int *)malloc(n * sizeof(int));
	y = (int *)malloc(n * sizeof(int));

	for (i = 0; i < n; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}

	for (i = 0; i < n; i++) {
		if (sqrt(x[i] * x[i] + y[i] * y[i]) <= d) {
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}