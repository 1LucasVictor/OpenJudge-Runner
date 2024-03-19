#include <stdio.h>

int main(void) {
	long x, y, temp;

	scanf("%d %d", &x, &y);

	if (y > x) {
		temp = x;
		x = y;
		y = temp;
	}

	while (1) {
		if (x % y == 0 ) {
			break;
		}
		else {
			if (y > x) {
				temp = x;
				x = y;
				y = temp;
			}
			temp = x % y;
			x = y;
			y = temp;
		}
	}

	printf("%d\n", y);

	return 0;
}
