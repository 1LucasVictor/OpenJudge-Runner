#include <stdio.h>

int main()
{
	long n;
	scanf("%ld", &n);
	long a[n];
	long b[n];
	long i = 1;
	long j = 0;
	while (i < n)
	{
		scanf("%ld", &a[i]);
		b[j] = i;
		i++;
		j++;
	}
	b[j] = i;
	i = 0;
	long x  = 1;
	long count = 0;
	while (i < n)
	{
		j = 0;
		count = 0;
		while (j < n)
		{
			if (b[i] == a[j])
			{
				count++;
			}
			j++;
		}
		printf("%ld\n", count);
		i++;
	}
	return 0;
}
