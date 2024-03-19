#include <stdio.h>          // printf(), scanf()

int
main(int argc, char** argv)
{
	int i;

	int n;
	scanf("%d", &n);

	for (i = 1; i <= n; ++i)
	{
		int x = i;
		if (x % 3 == 0)
		{
			printf(" %d", i);
			continue;
		}

		do
		{
			if (x % 10 == 3)
			{
				printf(" %d", i);
				break;
			}

			x /= 10;
		} while (x != 0);
	}

	printf("\n");
	return 0;
}