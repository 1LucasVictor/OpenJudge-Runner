#include <stdio.h>

int main(void)
{
	long n, k;
	scanf("%ld%ld", &n,&k);
	long x = n % k;
	long y;
	if (k > x)
		y = k - x;
	else
		y = x - k;
	if (x < y)
		printf("%ld", x);
	else
		printf("%ld", y);
	return 0;
}
