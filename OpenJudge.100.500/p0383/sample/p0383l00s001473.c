#include <stdio.h>

int main(void){
	int n, m, l;
	int i, j, k;
	int mat1[10000] = { 0 };
	int mat2[10000] = { 0 };

	scanf("%d %d %d", &n, &m, &l);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &mat1[i * m + j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < l; j++)
		{
			scanf("%d", &mat2[i * l + j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l; j++)
		{
			long c = 0;
			for (k = 0; k < m; k++)
			{
				c += mat1[i * m + k] * mat2[k * l + j];
			}
			printf("%ld", c);
			if (j < l - 1) putchar(' ');
		}
		putchar('\n');
	}

	return 0;
}
