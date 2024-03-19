#include <stdio.h>

int main(void)
{
	int W, H, x, y, r;

	W = 0;
	H = 0;
	x = 0;
	y = 0;
	r = 0;

	scanf("%d",&W);
	scanf("%d",&H);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&r);

	
	if ((y + r <= H) && (0 <= y - r) && (x + r <= W) && (0 <= x - r))
	{
		printf("Yes\n");
	}

	else
	{
		printf("No\n");
	}

	return 0;
}
