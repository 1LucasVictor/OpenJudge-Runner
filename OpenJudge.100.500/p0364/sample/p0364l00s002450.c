#include <stdio.h>
int main(void)
{
	int W, H, x, y, r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	if((x + r <= W && x - r >= 0) && (y + r <= H && y - r >= 0)) 
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");	
	}
	return 0;
	
}
