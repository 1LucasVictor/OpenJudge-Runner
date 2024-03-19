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
		i++;
	}
	while (j < n)
	{
		b[j] = j + 1;
		j++;
	}
	i = 0;
	long x  = 1;
	long count = 0;
	while (i < n)
	{
		j = x;
		count = 0;
		while (j < n)
		{
			if (b[i] == a[j])
			{
				count++;
			}
			if (a[j] != a[j + 1])
			{
				x = j + 1;
				break ;
			}
			j++;
		}
		printf("%ld\n", count);
		i++;
	}
	return 0;
}
