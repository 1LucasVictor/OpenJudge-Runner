#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int a, b, c, x;

int main() {
	scanf("%d%d%d", &a, &b, &c);

	if (b > c) {
		x = b;
		b = c;
		c = x;
	}

	if (a > b) {
		x = a;
		a = b;
		b = x;
	}

	if (a > c) {
		x = a;
		a = c;
		c = a;
	}

	printf("%d %d %d\n", a, b, c);

	return 0;

}