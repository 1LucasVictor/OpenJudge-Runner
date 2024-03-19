#include <stdio.h>
#include <string.h>

void Print(unsigned long ary[][100], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (j == col-1)
				printf("%lu\n", ary[i][j]);
			else
				printf("%lu ", ary[i][j]);
		}
	}
}

int main()
{
	int n,m,l;
	int num;
	
	unsigned long A[100][100] = {0};
	unsigned long B[100][100] = {0};
	unsigned long C[100][100] = {0};
	
	int i, j, k;
	
	scanf("%d %d %d", &n, &m, &l);
	
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			int x;
			scanf("%lu", &x);
			A[i][j] = x;
		}
	
	for (i = 0; i < m; i++)
		for (k = 0; k < l; k++)
		{
			int x;
			scanf("%lu", &x);
			B[i][k] = x;
		}
	
	for (i = 0; i < n; i++)
		for (j = 0; j < l; j++)
		{
			long sum = 0;
			for (k = 0; k < m; k++)
				sum += (A[i][k] * B[k][j]);
			
			C[i][j] = sum;
		}
	Print(C, n, l);
	
	return 0;
}