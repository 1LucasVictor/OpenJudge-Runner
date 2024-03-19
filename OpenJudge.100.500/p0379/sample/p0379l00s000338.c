#include<stdio.h>

int main(void)
{
	int n, m;   //n*m行列
	int i, j;   //くり返し用
	int matrix[100][100];   //行列
	int column_vector[100];   //列ベクトル
	int answer[100] = { 0 };   //行列*列ベクトルの答え

	scanf("%d %d", &n, &m);
	/*行列入力*/
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	/*列ベクトル入力*/
	for (i = 0; i < m; i++)
	{
		scanf("%d", &column_vector[i]);
	}
	/*行列*列ベクトル*/
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			answer[i] = answer[i] + matrix[i][j] * column_vector[j];
		}
	}
	/*答え出力*/
	for (i = 0; i < n; i++)
	{
		printf("%d\n", answer[i]);
	}
	return 0;

}
