#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, x = 3;

	scanf("%d", &n);
	while (x <= n)
	{
		if (x % 3 == 0)
		{
			printf(" %d", x);
		}
		else if (x % 10 == 3)
		{
			printf(" %d", x);
		}
		else
		{
			int y = x / 10;
			while (y)
			{
				if (y % 10 == 3)
				{
					printf(" %d", x);
					break;
				}
				y = y / 10;
			}
		}
		x++;
	}

	printf("\n");
	return 0;
}

