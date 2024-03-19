#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, ix, j, jx, n, m, k, r = 0;
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

	for (i = 0; i < n + 1; i++)
	{
		for (j = m; j >= 0; j--)
		{
			if (a[i] + b[j] <= k && i + j > r)
			{
				r = i + j;
			}
		}
	}

	printf("%d\n", r);
	return 0;
}