#include <stdio.h>

int main()
{
	unsigned long long int a;
	double b;

	scanf("%llu %lf", &a, &b);

	a *= b;

	printf("%llu\n", a);

	return 0;
}