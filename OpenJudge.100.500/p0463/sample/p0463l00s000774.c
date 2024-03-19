#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	if ((n % 10) == 2)
		puts("hon");
	else if ((n % 10) == 4)
		puts("hon");
	else if ((n % 10) == 5)
		puts("hon");
	else if ((n % 10) == 7)
		puts("hon");
	else if ((n % 10) == 9)
		puts("hon");
	else if ((n % 10) == 0)
		puts("pon");
	else if ((n % 10) == 1)
		puts("pon");
	else if ((n % 10) == 6)
		puts("pon");
	else if ((n % 10) == 8)
		puts("pon");
	else if ((n % 10) == 3)
		puts ("bon");

	return 0;
}