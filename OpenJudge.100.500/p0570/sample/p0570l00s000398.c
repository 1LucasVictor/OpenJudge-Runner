#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int a, b, k = -1, temp1, temp2, min, max;
	scanf("%lld %lld", &a, &b);
	min = a;
	max = b;
	if (min > b)
	{
		min = b;
		max = a;
	}
	for (; min <= max; ++min)
	{
		temp1 = llabs(a-min);
		temp2 = llabs(b-min);
		if (temp1 == temp2)
		{
			k = min;
			break;
		}
	}
	if (k == -1)
	{
		printf("IMPOSSIBLE");
	} else {
		printf("%lld", k);
	}
	return 0;
}