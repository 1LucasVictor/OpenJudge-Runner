#include <stdio.h>
int main()
{
	int n, x, i, j, k, g, p;
	scanf("%d %d", &n, &x);
	while (n != 0 || x != 0)
	{
		p = 0;
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= n; j++)
			{
				if (i == j)
					break;
				for (k = 3; k <= n; k++)
				{
					if (i == k || j == k)
						break;
					g = i + j + k;
					if (x == g)
						p++;
				}
			}
		}
		printf("%d\n", p);
		scanf("%d %d", &n, &x);
	}
}
