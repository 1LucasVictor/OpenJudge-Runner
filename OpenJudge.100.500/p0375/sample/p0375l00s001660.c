#include <stdio.h>
int main(void)
{
	int n,i,k;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 || i % 10 == 3)
		{
			printf(" %d", i);
		}
		else
		{
			k = 10;
			while (k <= 10000)
			{
				if (i%k == 3)
				{
					printf(" %d", i);
				}
				k = k * 10;
			}

		}
	}
	printf("\n");
	return 0;
}