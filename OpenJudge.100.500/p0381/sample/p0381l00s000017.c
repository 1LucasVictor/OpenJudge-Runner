#include <stdio.h>

int main(void)
{
	int n, x;
	int i, j, k;
	int a = 0;

	while(1)
	{
		scanf("%d%d", &n, &x);
		if (n + x == 0)
		{
			return 0;
		}
		for (i = 1; i <= n - 2; i++)
		{
			for (j = i + 1; j <= n - 1; j++) 
			{
				for (k = j + 1; k <= n; k++) 
				{
					if (i + j + k == x) a++;
				}
			}
		}

		printf("%d\n", a);

		a = 0;
	}
	return 0;
}
