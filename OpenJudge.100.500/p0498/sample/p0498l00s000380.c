#include "stdio.h"

int main(void) {
	int a, b, c;

	scanf("%d", &a);

	b = a / 2;
	c = a % 2;
	if (c == 1)b++;

	printf("%d\n", b);

	return 0;
}