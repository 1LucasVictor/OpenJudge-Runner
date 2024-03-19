#include <stdio.h>

int main(void) {

	int x, y500, y5, sum;

	scanf("%d", &x);

	y500 = (int)(x / 500);

	x -= y500 * 500;

	y5 = (int)(x / 5);

	sum = (y500 * 1000) + (y5 * 5);

	printf("%d", sum);

	return 0;
}