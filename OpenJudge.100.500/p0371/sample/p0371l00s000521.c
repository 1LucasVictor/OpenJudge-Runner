#include <stdio.h>
int main(void)
{
	int n, i, a, min = 1000000, max = -1000000;
	long long z = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		min = (min > a) ? a : min;
		max = (max < a) ? a : max;
		z = z + a;
	}
	printf("%d %d %lld\n", min, max, z);
	return 0;
}