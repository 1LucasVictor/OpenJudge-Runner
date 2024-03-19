#include <stdio.h>

#define DATA 100

int main(void)
{
	int a[DATA][DATA], b[DATA], c[DATA];
	int n, m, i, j;

	scanf("%d %d", &n, &m);
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < m;j++)
			scanf("%d", &a[i][j]);
	}
	for(i = 0;i < m;i++)
	{
		scanf("%d", &b[i]);
	}
	for(i = 0;i < n;i++)
		for(j = 0;j < m;j++)
			c[i] += a[i][j] * b[j];
	for(i = 0;i < n;i++)
	{
		printf("%d\n", c[i]);
	}

	return 0;
}