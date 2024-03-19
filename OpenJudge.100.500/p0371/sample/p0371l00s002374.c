#include <stdio.h>
int main(void)
{
	int a, i, max, min, n;
	long long int sum;
	max = -1000000;
	min = 1000000;
	sum = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i = i + 1)
	{
		scanf("%d", &a);
		if (min > a)
		{
			min = a;
		}
			
		if (max < a)
		{
			max = a;
		}
		sum = sum + a;
	}
	printf("%d %d %lld\n", min, max, sum);
	return 0;
}

