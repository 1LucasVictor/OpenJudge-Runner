#include <stdio.h>

int main( ) {
	int x, y, ans, buff, max, i;

	scanf("%d %d", &x, &y);

	if (x < y) {
		buff = x;
		x = y;
		y = buff;
	}

	while (x / y > 1) {
		buff = x % y;
		x = y;
		y = buff;
	}

	max = 1;

	for (i = y; i > 1; i--) {
		if (x % i == 0 && y % i == 0) {
			max = i;
			break;
		}
	}

	printf("%d\n", max);

	return 0;
}