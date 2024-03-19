#include <stdio.h>          // printf(), scanf()

int
main(int argc, char** argv)
{
	int count;
	int n;
	int a, b, c, d;

	while (scanf("%d", &n) != EOF)
	{
		count = 0;
		for (a = 0; a <= 9; ++a)
		{
			for (b = 0; b <= 9; ++b)
			{
				for (c = 0; c <= 9; ++c)
				{
					for (d = 0; d <= 9; ++d)
					{
						if (a + b + c + d == n)
							count++;
					}
				}
			}
		}

		printf("%d\n", count);
	}

	return 0;
}