#include <stdio.h>

int main(void)
{
	int n = 0;
	int m = 0;
	int x = 0;
	int y = 0;
	int c = 0;
	int i = 0;
	int j = 0;
	int a1 = 0;
	int b1 = 0;

	unsigned int A[100][100];
	unsigned int b[100];


	scanf("%d %d", &n, &m);

	for(i = 0; i < 100; i++)
	{
		for(j = 0; j < 100; j++)
		{
			A[i][j] = 0;
			b[j] = 0;
		}
	}

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &x);
			A[i][j] = x;
		}
	}

	for(i = 0; i < m; i++)
	{
		scanf("%d", &y);
		b[i] = y;
	}

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			a1 = A[i][j];
			b1 = b[j];
			c += a1 * b1;
			a1 = 0;
			b1 = 0;
		}
		printf("%d\n", c);
		c = 0;
	}

	return 0;
}