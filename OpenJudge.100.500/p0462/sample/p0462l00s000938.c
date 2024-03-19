#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b_100, output;
	double b;

	scanf("%d", &a);
	scanf("%lf", &b);

	b_100 = b * 100;

	output = a * (int)b_100;

	output /= 100;

	printf("%d", output);

	return 0;
}