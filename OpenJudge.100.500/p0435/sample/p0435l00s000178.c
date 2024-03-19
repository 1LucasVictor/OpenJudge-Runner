#include<stdio.h>

#define ElementType long long
#define str "%lld %lld"

int main()
{
	ElementType N, D;
	ElementType i;
	ElementType x, y;
	ElementType count = 0;

	scanf(str, &N, &D);

	for (i = 0 ; i < N ; i++)
	{
		scanf(str, &x, &y);
		if (x * x + y * y <= D * D)
		{
			count += 1;
		}
	}

	printf("%lld\n", count);

	return 0;
}