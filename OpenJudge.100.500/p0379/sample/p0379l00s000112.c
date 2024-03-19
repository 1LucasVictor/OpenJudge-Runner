#include <stdio.h>

int main(void)
{
	int n, m, a[100][100], b[100][1], c[100][1], count_1, count_2;

	scanf("%d %d", &n, &m);

	for (count_1 = 0; count_1 < n; count_1++)
	{
		for (count_2 = 0; count_2 < m; count_2++)
		{
			scanf("%d", &a[count_1][count_2]);
		}
	}

	for (count_1 = 0; count_1 < m; count_1++)
	{
		scanf("%d", &b[count_1][0]);
	}

	for (count_1 = 0; count_1 < n; count_1++)
	{
		for (c[count_1][0] = 0, count_2 = 0; count_2 < m; count_2++)
		{
			c[count_1][0] = c[count_1][0] + (a[count_1][count_2] * b[count_2][0]);
		}
	}

	for (count_1 = 0; count_1 < n; count_1++)
	{
		printf("%d\n", c[count_1][0]);
	}

	return 0;
}
