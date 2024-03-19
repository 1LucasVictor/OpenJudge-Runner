#include <stdio.h>

int main(void) {
	int i;
	int a, b, t;
	int sum = 0;

	scanf("%d%d%d", &a, &b, &t);

	for (i = 0; i <= t; i++) {
		if (a % (i + 1) == 0) {
			sum += b;
		}
	}

	printf("%d", sum);
}