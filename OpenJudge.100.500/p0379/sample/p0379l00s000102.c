#include<stdio.h>

int main(void)
{
	int m, n;	
	int i, j;
	int sum;
	int A[100][100], b[100];

	scanf("%d %d", &n, &m);

	for( i = 0; i < n; i++)
	{
		for( j = 0; j < m; j++)
			scanf("%d", &A[i][j]);
	}

	for( i = 0; i < m; i++)
		scanf("%d", &b[i]);

	for( i = 0; i < n; i++)
	{
		sum = 0;
		for( j = 0; j < m; j++)
			sum += A[i][j] * b[j];
		printf("%d\n", sum);
	}

	return 0;

}
