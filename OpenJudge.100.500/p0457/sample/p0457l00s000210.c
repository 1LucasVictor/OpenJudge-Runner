#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, ix, j, jx, n, m, k, r = 0;
	long int a[200010], b[200010], time = 0;

	scanf("%d%d%d", &n, &m, &k);

	for (i = 0; i < n; i++)
	{
		scanf("%ld", &a[i]);
	}

	for (i = 0; i < m; i++)
	{
		scanf("%ld", &b[i]);
	}
	i = 0;
	j = 0;

	while (time <= k)
	{
		if (a[i] < b[j])
		{
			time += a[i];
			i++;
		}
		if (a[i] > b[j])
		{
			time += b[j];
			j++;
		}
		if (a[i] == b[j])
		{
			ix = i;
			jx = j;
			while (a[ix] == b[jx])
			{
				if (a[ix] < b[jx] || jx >= m - 1)
				{
					time += a[i];
					i++;
					break;
				}
				if (a[ix] > b[jx] || ix >= n - 1)
				{
					time += b[j];
					j++;
					break;
				}
				ix++;
				jx++;
			}
		}

		r++;
		if (r == n + m)
		{
			break;
		}
	}
	if (r == 1)
	{
		r -= 1;
	}

	printf("%d\n", r);
	return 0;
}