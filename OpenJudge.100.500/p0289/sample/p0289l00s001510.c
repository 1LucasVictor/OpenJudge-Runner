#include <stdio.h>

int gcd(int x, int y) {
	int i;
	for (i = x; i > 0; i--) {
		if (x % i == 0 && y % i == 0) {
			break;
		}
	}
	return i;
}

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a < b) {
		printf("%d\n", gcd(a, b));
	} else {
		printf("%d\n", gcd(b, a));
	}
	return 0;
}