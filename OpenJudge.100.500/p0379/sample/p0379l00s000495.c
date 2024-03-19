#include<stdio.h>
int main(void)
{
	int A[100][100], b[100][1], n, m, i, j, output[100][1] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		scanf("%d", &b[i][1]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			output[i][1] += A[i][j] * b[j][1];
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\n", output[i][1]);
	}
	return 0;
}
