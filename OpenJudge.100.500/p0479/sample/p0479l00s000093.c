#include <stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);
	long long a[n];
	long long b[n];
	long long i = 1;
	while (i < n)
		scanf("%lld", &a[i++]);
	a[0] = a[1] - 1;
	i = 0;
	long long j;
	long long x = 1;
	while (i < n - 1)
	{
		b[i] = 0;
		j = x;
		while (j < n)
		{
			if (a[i] < a[j])
			{
				b[i] += 1;
				if (a[j] < a[j + 1])
				{
					x = j + 1;
					break;
				}
			}
			j++;
		}
		printf("%lld\n", b[i]);
		i++;
	}
	printf("0\n");
	return 0;
}
