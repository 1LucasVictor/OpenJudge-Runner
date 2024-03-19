#include <stdio.h>

int		main(void)
{
	int W;
	int H;
	int x;
	int y;
	int r;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	if (r > x || x + r > W)
		printf("No\n");
	else if (r > y || y + r > H)
		printf("No\n");
	else
		printf("Yes\n");
	return (0);
}

