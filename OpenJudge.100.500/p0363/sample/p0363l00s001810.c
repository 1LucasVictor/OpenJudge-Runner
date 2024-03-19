#pragma warning(disable: 4996)
#include<stdio.h>

int a, b, c, x;

int main() {
	scanf("%d %d %d", &a, &b, &c);
	while (1) {
		if (a > b) {
			x = a;
			a = b;
			b = x;
		}
		if (b > c) {
			x = b;
			b = c;
			c = x;
		}
		if (a < b && b < c && a < c) {
			printf("%d %d %d\n", a, b, c);
			break;
		}
	}

}
