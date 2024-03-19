#include <stdio.h>

int
main()
{
	int x, y;
	int k;

	int n, m, l;	
	long long int a[100][100] = {0};
	long long int b[100][100] = {0};
	long long int c[100][100] = {0};

	scanf("%d %d %d", &n, &m, &l);
	for (y = 0; y < n; y++)
	{
		for (x = 0; x < m; x++)
		{
			scanf("%lld", &a[y][x]);
		}
	}
	for (y = 0; y < m; y++)
	{
		for (x = 0; x < l; x++)
		{
			scanf("%lld", &b[y][x]);
		}
	}

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < l; x++)
		{
			for (k = 0; k < m; k++)
			{
				c[y][x] += a[y][k] * b[k][x];
			}
		}
	}

	for (y = 0; y < n; y++) {
		for (x = 0; x < l; x++)
		{
			if (x != 0)
			{
				printf(" ");
			}
			printf("%lld", c[y][x]);
		}
		printf("\n");
	}

	return 0;
}