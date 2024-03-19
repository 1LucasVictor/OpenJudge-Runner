#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b,c,d;

	long x,y,z;

	scanf("%d%d", &a, &b);

	for (x = 0; x < 10000000000; x++) {
		if (a == 0 || b == 0) {
			printf("IMPOSSIBLE");
			break;
		}
		if (a % 2 != b % 2) {
			printf("IMPOSSIBLE");
			break;
		}
		y = a - x;
		z = b - x;
		if (y < 0)y = y * -1;
		if (z < 0)z = z * -1;
		if (y == z) {
			printf("%ld", x);
			break;
		}
		else if (x == 10000000000 && y != z) {
			printf("IMPOSSIBLE");
			break;
		}
	}

	return 0;
}