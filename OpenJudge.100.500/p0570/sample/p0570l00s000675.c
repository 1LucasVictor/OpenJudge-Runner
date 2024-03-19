#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b,c,d;

	long x,y,z;

	scanf("%d%d", &a, &b);
	
	if (a == 0 || b == 0)printf("IMPOSSIBLE");

	for (x = 0; x < 10000000000;x++) {
		c = a;
		d = b;
		y = c - x;
		z = d - x;
		if (y < 0)y = y * -1;
		if (z < 0)z = z * -1;
		if (y == z) {
			printf("%ld", x);
			break;
		}
		else if (x == 10000000000 && y != z)printf("IMPOSSIBLE");

	}

	return 0;
}