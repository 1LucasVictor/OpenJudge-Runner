#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	long long int a, b, c, n;
	scanf("%lld%lld%lld%lld", &a, &b, &c, &n);
	if (a >= n)
	{
		printf("%lld", n);
	}
	else if (a + b >= n)
	{
		printf("%lld", a);
	}
	else
	{
		printf("%lld", a - (n - a - b));
	}
	return 0;
}