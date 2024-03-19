#include <stdio.h>

int main(void) {
	int n, m, l;
	scanf("%d%d%d", &n, &m, &l);
	long int A[n][m];
	long int B[m][l];
	long long int C[n][l];
	int i, j, k;
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%ld", &A[i][j]);
		}
	}
	for (i=0; i<m; i++)
	{
		for (j=0; j<l; j++)
		{
			scanf("%ld", &B[i][j]);
		}
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<l; j++)
		{
			C[i][j]=0;
			for (k=0; k<m; k++)
			{
				C[i][j]+=A[i][k]*B[k][j];	
			}
		}
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<l-1; j++)
		{
			printf("%lld ", C[i][j]);
		}
		printf("%lld\n", C[i][l-1]);
	}
	return 0;
}