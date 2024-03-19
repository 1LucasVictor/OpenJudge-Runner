#include <stdio.h>

int
main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (a * b % 2)
		puts("Odd");
	else
		puts("Even");
	return (0);
}
