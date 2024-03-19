#include <stdio.h>

int
main()
{
	int n;
	scanf("%d", &n);

	int i, x;
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			printf(" %d", i);
			continue;
		}
		if (i % 10 == 3)
		{
			printf(" %d", i);
			continue;
		}

		x = i / 10;
		while (x != 0)
		{
			if (x % 10 == 3)
			{
				printf(" %d", i);
				break;
			}
			x /= 10;
		}
	}
	printf("\n");

	return 0;
}