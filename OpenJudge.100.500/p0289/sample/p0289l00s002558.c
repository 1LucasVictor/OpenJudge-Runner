#include <stdio.h>

int main(void)
{
	int r, x, y;
	scanf("%d %d", &x, &y);
	if (x < y) {
		r = x;
		x = y;
		y = x;
	}
	while (y > 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("%d\n", x);
	return 0;
}