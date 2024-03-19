#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n, d, ii, count=0;
	int x, y;

	scanf("%d%d", &n, &d);


	for (ii = 0; ii < n; ii++) {
		scanf("%d%d", &x, &y);
		
		if (x * x + y * y <= d * d) {
			count++;
		}
	}

	printf("%d", count);

	return 0;

}