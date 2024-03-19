#include<stdio.h>

int main(void){
	int i, j, k, n, m, l, A[105][105], B[105][105];
	long  int C[105][105];

	scanf("%d %d %d", &n, &m, &l);
	for (i = 0; i<n; i++)
	{
		scanf("%d", &A[i][0]);
		for (j = 1; j<m; j++)
		{
			scanf(" %d", &A[i][j]);
		}
	}
	for (i = 0; i<m; i++)
	{
		scanf("%d", &B[i][0]);
		for (j = 1; j<l; j++)
		{
			scanf(" %d", &B[i][j]);
		}
	}

	for (i = 0; i<n; i++)
	{
		for (j = 0; j<l; j++)
		{
			for (k = 0; k<m; k++)
			{
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
	for (i = 0; i<n; i++)
	{
		printf("%ld", C[i][0]);
		for (j = 1; j<l; j++)
		{
			printf(" %ld", C[i][j]);
		}printf("\n");
	}

	return 0;
}
