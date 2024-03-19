#include <stdio.h>
#include <string.h>

int main()
{
	long long int a, b, c,k,sum=0;

	scanf("%lld%lld%lld%lld", &a, &b, &c, &k);

	if (k <= a)
	{
		sum = a;
		k = k - a;
	}
	else
	{
		k=k - a;
		sum = a;
	}
	if (k > b)
	{
		k = k - b;
		sum += (k * (-1));
	}
	printf("%lld\n", sum);
	return 0;
}