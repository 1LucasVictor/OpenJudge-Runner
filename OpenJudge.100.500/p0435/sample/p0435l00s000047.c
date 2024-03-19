#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int n, d, ii, count=0;
	int *x, *y;
	double distance;

	scanf("%d%d", &n, &d);

	x = (int*)malloc(sizeof(int)* n);
	y = (int*)malloc(sizeof(int) * n);

	for (ii = 0; ii < n; ii++) {
		scanf("%d%d", x + ii, y + ii);
		distance = sqrt(x[ii] * x[ii] + y[ii] * y[ii]);

		if (distance <= d) {
			count++;
		}
	}

	printf("%d", count);

	free(x);
	free(y);
	
	return 0;

}