#include<stdio.h>

int main(void)

{
	int n, m, l, x[100][100], y[100][100],a,b,k;
	long long int z[100][100];
	scanf("%d %d %d", &n, &m, &l);
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < l; b++)
		{
			z[a][b] = 0;
		}
	}

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < m; b++)
		{
			scanf("%d", &x[a][b]);
		}
	}
	for (a = 0; a < m; a++)
	{
		for (b = 0; b < l; b++)
		{
			scanf("%d", &y[a][b]);
		}
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < l; b++)
		{
			for (k = 0; k < m; k++)
			{
				z[a][b] =z[a][b]+( x[a][k] * y[k][b]);
			}
		}
	}

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < l; b++)
		{
			if (b == l - 1)
			{
				printf("%lld", z[a][b]);
			}
			else
			{
				printf("%lld ", z[a][b]);
			}
		}
		printf("\n");
	}
		return 0;
}
