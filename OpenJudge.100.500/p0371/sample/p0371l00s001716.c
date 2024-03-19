#include <stdio.h>

int main(void)
{
	int n, i;
	long long int num = 0,min = 1000000, max = -1000000, sum = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%ld", &num);

		if (min > num) min = num;
		if (max < num) max = num;
		sum += num;
	}

	printf("%lld %lld %lld\n", min, max, sum);

	return 0;
}