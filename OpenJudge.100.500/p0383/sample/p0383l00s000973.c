#include<stdio.h>

int main()
{
	int n;
	int m;
	int l;
	int** matrixA;
	int** matrixB;
	long long int** matrix;
	int iCount1;
	int iCount2;
	int iCount3;
	int Matrix_Num;
	

	//n,m,lの入力
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &l);

	matrixA = (int*)malloc(sizeof(int *)*n);
	matrixB = (int*)malloc(sizeof(int*) * m);
	matrix = (long long int*)malloc(sizeof(long long int*) * n);

	//matrixAの初期化
	for (iCount1=0;iCount1<n;iCount1++)
	{
		matrixA[iCount1] = (int*)malloc(sizeof(int) * m);
	}

	//matrixBの初期化
	for (iCount1=0; iCount1 < m; iCount1++)
	{
		matrixB[iCount1] = (int*)malloc(sizeof(int) * l);
	}

	//matrixの初期化
	for (iCount1=0; iCount1 < n; iCount1++)
	{
		matrix[iCount1] = (long long int*)malloc(sizeof(long long int) * l);
	}

	//matrixAの代入
	for (iCount1=0; iCount1 < n; iCount1++)
	{
		for (iCount2=0; iCount2 < m; iCount2++)
		{
			scanf("%d", &Matrix_Num);
			matrixA[iCount1][iCount2] = Matrix_Num;
		}
	}

	//matrixBの代入
	for (iCount1 = 0; iCount1 < m; iCount1++)
	{
		for (iCount2 = 0; iCount2 < l; iCount2++)
		{
			scanf("%d", &Matrix_Num);
			matrixB[iCount1][iCount2] = Matrix_Num;
		}
	}

	//matrixの代入
	for (iCount1 = 0; iCount1 < n; iCount1++)
	{
		for (iCount2 = 0; iCount2 < l; iCount2++)
		{
			matrix[iCount1][iCount2] = 0;
		}
	}

	//行列計算
	for (iCount1 = 0; iCount1 < n; iCount1++)
	{
		for (iCount2 = 0; iCount2 < l; iCount2++)
		{
			for (iCount3 = 0; iCount3 < m; iCount3++)
			{
				matrix[iCount1][iCount2] += matrixA[iCount1][iCount3]*matrixB[iCount3][iCount2];
			}
		}
	}


	//計算結果の出力
	for (iCount1 = 0; iCount1 < n; iCount1++)
	{
		for (iCount2 = 0; iCount2 < l; iCount2++)
		{
			printf("%lld", matrix[iCount1][iCount2]);

			if (iCount2 != l - 1)
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	//メモリの解放
	free(matrixA);
	free(matrixB);
	free(matrix);

}
