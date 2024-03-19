#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n, m, l;
	long long int a[101][101];
	long long int b[101][101];
	long long int c[101][101];
	long long int i, j,k,sum;

	scanf("%d%d%d", &n, &m, &l);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			scanf("%lld", &a[i][j]);
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < l; j++)
			scanf("%lld", &b[i][j]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l; j++)
		{
			sum = 0;
			for (k = 0; k < m; k++)
				sum += a[i][k] * b[k][j];
			c[i][j] = sum;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l-1; j++)
		{
			printf("%lld ", c[i][j]);
		}
		printf("%lld\n", c[i][l - 1]);
	}

	return 0;
}
