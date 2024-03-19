#include <stdio.h>

int main(void)
{
	int n, x, a=0, i, j, k;

	while (1)
	{
		scanf("%d %d", &n, &x);

		if (n<3&&x==0)
		{
			break;
		}
		for ( i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				for (k = 1; k <= n; k++)
				{
					if (i != k && k != j && i != k)
					{
						if (i + j + k == x )
						{
							a++;
						}
					}
				}
			}
		}
		printf("%d\n", a/6);

	}
	return 0;
}
