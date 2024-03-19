#include <stdio.h>

int main(void)
{
	int n, m, A[100][100] = { {0} }, b[100][1] = { {0} }, i, j, c[100][1] = { {0} };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	for (j = 0; j < m; j++)
	{
		scanf("%d", &b[j][0]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			c[i][0] = c[i][0] + A[i][j] * b[j][0];
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\n", c[i][0]);
	}


	return 0;
}