#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	long long int min = 1000006, max = -1000006, sum = 0, a;
	for (i = 0; i < n; i++)
	{
		scanf("%lld", &a);
		sum += a;
		if (min > a)
			min = a;
		if (max < a)
			max = a;
	}
	printf("%lld %lld %lld\n", min, max, sum);
	return 0;
}
