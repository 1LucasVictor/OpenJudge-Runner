#include <stdio.h>

int main(void){
	int mat1[10000] = { 0 };
	int mat2[100] = { 0 };
	int c[100] = { 0 };
	int n, m;
	int i, j;

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &mat1[i * m + j]);
		}
	}
	for (j = 0; j < m; j++)
	{
		scanf("%d", &mat2[j]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			c[i] += mat1[i * m + j] * mat2[j];
		}
		printf("%d\n", c[i]);
	}

	return 0;
}
