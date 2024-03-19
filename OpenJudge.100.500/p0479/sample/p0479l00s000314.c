#include <stdio.h>

int main()
{
	long n;
	scanf("%ld", &n);
	long a[n];
	long b[n];
	long i = 1;
	while (i < n)
		scanf("%ld", &a[i++]);
	a[0] = a[1] - 1;
	i = 0;
	long j;
	long x = 1;
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
		printf("%ld\n", b[i]);
		i++;
	}
	printf("0\n");
	return 0;
}
