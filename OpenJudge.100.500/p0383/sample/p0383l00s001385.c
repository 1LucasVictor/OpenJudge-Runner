/*
氏名 : 杉谷　裕貴,学籍番号 : 190441066
概要 : 行列の積を出力するプログラム
*/
#include<stdio.h>

int main(void)
{
	int n, m, l, i, j, k, a[100][100] = { 0 }, b[100][100] = { 0 };
	long long int c[100][100] = { 0 };

	scanf("%d %d %d", &n,&m,&l);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (j = 0; j < m; j++)
	{
		for (k = 0; k < l; k++)
		{
			scanf("%d", &b[j][k]);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			for (k = 0; k < l; k++)
			{
				c[i][k] += a[i][j] * b[j][k];
			}
		}
		
	}

	for (i = 0; i < n; i++)
	{
			for (k = 0; k < l; k++)
			{
				printf("%lld", c[i][k]);
				if (k != l - 1)
				{
					putchar(' ');
				}
			}
			putchar('\n');
	}
	
	return 0;
}
