#include <stdio.h>
#define SIZE 100
int main(void)
{
	int l, m, n;
	int i, j, k;
	int va[SIZE][SIZE], vb[SIZE][SIZE], vc[SIZE][SIZE];

	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
		{
			va[i][j] = 0;
			vb[i][j] = 0;
			vc[i][j] = 0;
		}

	scanf("%d%d%d", &n, &m, &l);

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &va[i][j]);

	for (i = 0; i < m; i++)
		for (j = 0; j < l; j++)
			scanf("%d", &vb[i][j]);

	for (i = 0; i < n; i++)
		for (j = 0; j < l; j++)
			for (k = 0; k < m; k++)
				vc[i][j] += va[i][k] * vb[k][j];

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%d", vc[i][j]);
			if (j < l - 1)
				putchar(' ');
		}
		putchar('\n');
	}

	return 0;
}