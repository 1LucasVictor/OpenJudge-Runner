#include <stdio.h>          // printf(), scanf()
#include <stdbool.h>
#define MAX_N 100000

int w[MAX_N];
int n, k;

bool
cond(int p)
{
	int v;
	int i, j;

	j = 0;
	for (i = 0; i < k; ++i)
	{
		v = 0;
		while (v + w[j] <= p)
		{
			v += w[j];
			j++;
			if (j >= n)
				return false;
		}
	}

	return j < n;
}

int
main(int argc, char** argv)
{
	int i;

	scanf("%d %d", &n, &k);
	int sum;
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &w[i]);
		sum += w[i];
	}

	int lb = 0, ub = sum;
	while (ub - lb > 1)
	{
		int mid = (lb + ub) / 2;
		if (cond(mid))
			lb = mid;
		else
			ub = mid;
	}

	printf("%d\n", ub);
	return 0;
}