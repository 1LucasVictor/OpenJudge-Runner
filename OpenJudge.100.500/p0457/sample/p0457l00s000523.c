#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, n, m, k, r = 0, max;
	long int a[200010], b[200010];

	scanf("%d%d%d", &n, &m, &k);

	a[0] = 0;
	b[0] = 0;

	for (i = 1; i < n + 1; i++)
	{
		scanf("%ld", &a[i]);
		a[i] += a[i - 1];
	}

	for (i = 1; i < m + 1; i++)
	{
		scanf("%ld", &b[i]);
		b[i] += b[i - 1];
	}
	max = m;
	for (i = 0; i < n + 1; i++)
	{
		if (a[i] > k)
		{
			break;
		}

		for (j = max; j >= 0; j--)
		{
			if (a[i] + b[j] <= k && i + j > r)
			{
				r = i + j;
				max = j;
				break;
			}
		}
	}

	printf("%d\n", r);
	return 0;
}