#include <stdio.h>

int main(void)
{
	int n, m, l;
	int i, j, k;   //くり返し用
	int A[100][100];   //行列A
	int B[100][100];   //行列B
	long long C[100][100] = { 0 };   //行列C

	scanf("%d %d %d", &n, &m, &l);

	/*行列A入力*/
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	/*行列B入力*/
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < l; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}

	/*行列A×行列Bを求める*/
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l; j++)
		{
			for (k = 0; k < m; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
			if (j != 0)
			{
				printf(" ");
			}
			printf("%ld", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
