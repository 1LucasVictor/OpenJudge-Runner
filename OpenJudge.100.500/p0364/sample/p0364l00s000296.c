#include <stdio.h>

void Judge_if_Rectangle_include_Circle(int W, int H, int x, int y, int r)
{
	if (((x - r >= 0) && (x + r <= W)) && ((y - r >= 0) && (y + r <= H)))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}

int main(void)
{
	int W, H, x, y, r;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

	Judge_if_Rectangle_include_Circle(W, H, x, y, r);

	return 0;
}
