#include <stdio.h>

int main(void)
{
	int n, r, i, a[13][4] = { {0} }, x, y;
	char  e;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf(" %c", &e); scanf("%d", &r);
		if (e == 'S')
		{
			a[r-1][0] = 1;
		}
		if (e == 'H')
		{
			a[r-1][1] = 1;
		}
		if (e == 'C')
		{
			a[r-1][2] = 1;
		}
		if (e == 'D')
		{
			a[r-1][3] = 1;
		}
	}
	for (x = 0; x < 4; x++)
	{
		for (y = 0; y < 13; y++)
		{
			if (a[y][x] == 0)
			{
				if (x == 0)
				{
					printf("S %d\n", y + 1);
				}
				if (x == 1)
				{
					printf("H %d\n", y + 1);
				}
				if (x == 2)
				{
					printf("C %d\n", y + 1);
				}
				if (x == 3)
				{
					printf("D %d\n", y + 1);
				}
			}
		}
	}

	return 0;
}