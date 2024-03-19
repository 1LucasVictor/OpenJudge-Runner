#include <stdio.h>          // printf(), scanf()
#include <stdbool.h>

int
main(int argc, char** argv)
{
	int x;
	long y;

	while (true)
	{
		scanf("%d\n", &x);
		if (x == 0)
			break;

		y = 0;
		while (x != 0)
		{
			y += x % 10;
			x /= 10;
		}

		printf("%d\n", y);
	}

	return 0;
}