#include <stdio.h>

int main(void)
{
	int x, happy500, happy5;

	scanf("%d", &x);
	
	happy500 = 1000 * (x / 500);
	x = x % 500;
	happy5 = 5 * (x / 5);

	printf("%d", happy500 + happy5);

	return 0;
}