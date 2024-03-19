#include <stdio.h>

int
main()
{
	int x, y;
	int cx, cy;

	int n, m, l;	
	int a[100][100] = {0};
	int b[100][100] = {0};
	int c[100][100] = {0};

	scanf("%d %d %d", &n, &m, &l);
	for (y = 0; y < n; y++)
	{
		for (x = 0; x < m; x++)
		{
			scanf("%d", &a[y][x]);
		}
	}
	for (y = 0; y < m; y++)
	{
		for (x = 0; x < l; x++)
		{
			scanf("%d", &b[y][x]);
		}
	}

	for (cy = 0; cy < n; cy++)
	{
		for (cx = 0; cx < l; cx++)
		{
			for (x = 0, y = 0; x < l && y < n; x++, y++)
			{
				c[cy][cx] += a[cy][x] * b[y][cx];
			}
		}
	}

	for (cy = 0; cy < n; cy++) {
		for (cx = 0; cx < n; cx++)
		{
			if (cx != 0)
			{
				printf(" ");
			}
			printf("%d", c[cy][cx]);
		}
		printf("\n");
	}

	return 0;
}