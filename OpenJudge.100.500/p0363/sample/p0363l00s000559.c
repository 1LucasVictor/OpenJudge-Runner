#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int a, b, c, x, y, z;

main() {
	scanf("%d%d%d", &a, &b, &c);

	if (b > c) {
		x = b;
		b = c;
		c = x;
	}

	if (a > b) {
		y = a;
		a = b;
		b = y;
	}

	if (a > c) {
		z = a;
		a = c;
		c = z;
	}

	printf("%d %d %d\n", a, b, c);

	return 0;

}