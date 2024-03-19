#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int a, b, k = -1, temp1, temp2;
	int i;
	scanf("%lld %lld", &a, &b);
	for (i = a; i <= b; ++i)
	{
		temp1 = llabs(a-i);
		temp2 = llabs(b-i);
		if (temp1 == temp2)
		{
			k = i;
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