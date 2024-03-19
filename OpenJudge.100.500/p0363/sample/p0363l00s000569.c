#include <stdio.h>

int
main(void)
{
	int x, y, z, a;

	scanf("%d%d%d", &x, &y, &z);
	if (y < x) {
		a = x;
		x = y;
		y = a;
	}
	if (z < x) {
		printf("%d %d %d\n", z, x, y);
	} else if (z < y) {
		printf("%d %d %d\n", x, z, y);
	} else {
		printf("%d %d %d\n", x, y, z);
	}

	return 0;
}
