#include <stdio.h>

int main(void)
{
	int W, H, x, y, r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	
	if(x + r < W && 0 < x -r && 0 < y - r && y + r < H)
	{
		printf("Yes\n");
	}
	else{
	printf("No\n");
	}
	return 0;
}



