#include <stdio.h>

int main(void) {
	int a, sum = 0;

	scanf("%d", &a);

	sum = sum + a + a * a + a * a * a;

	printf("%d\n", sum);

	return 0;
}