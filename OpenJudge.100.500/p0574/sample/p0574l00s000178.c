#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int a[4], b, i;
	scanf("%d", &b);
	for (i = 1; i < 4; ++i) {
		a[i] = b % 10;
		if (i > 1) {
		if (a[i] == a[i - 1]) {
			printf("Bad");
			return 0;
		}
		b /= 10;
	}

		}
	printf("Good");
	return 0;
}