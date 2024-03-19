#include <stdio.h>

int main(void)
{
	int n, last;

	scanf("%d", &n);

	last = n % 2;

	printf("%d\n", n / 2 + last);

	return 0;
}