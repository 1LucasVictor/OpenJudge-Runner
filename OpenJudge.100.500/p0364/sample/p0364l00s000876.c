#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c, d, x = 0, y = 0, r = 0;
	int w = 0;//横
	int h = 0;//縦
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
	a = x + r;
	b = x - r;
	c = y + r;
	d = y - r;
	if(0 <= b && a <= w){
		if(0 <= d && c <= h){
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
