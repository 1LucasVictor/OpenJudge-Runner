#include<stdio.h>
int main(void)
{
	int n = 1, x = 1, i, j, k, count = 0;
	while (n != 0 || x != 0)
	{
		scanf("%d %d", &n, &x);
		for (i = 1; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				for (k = j + 1; k <= n; k++)
				{
					if (i + j + k == x)
					{
						count += 1;
					}
				}
			}
		}
		if ((n != 0) || (x != 0))
		{
			printf("%d\n", count);
		}
		count = 0;
	}
	return 0;
}

