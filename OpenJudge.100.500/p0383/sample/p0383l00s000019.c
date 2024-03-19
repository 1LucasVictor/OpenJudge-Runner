#include <stdio.h>

int main(void)
{
	long long int A[100][100], B[100][100], C[100][100] = {0};
	int n, m, l;
	int i, k, j;

	scanf("%d %d %d", &n, &m, &l);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%lld", &A[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < l; j++)
		{
			scanf("%lld", &B[i][j]);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l; j++)
		{
			for (k = 0; k < m; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}

			printf("%lld", C[i][j]);

			if (j < l - 1)
			{
				printf(" ");
			}
		}

		printf("\n");
	}

	return 0;
}
