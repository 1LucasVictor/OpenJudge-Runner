#include <stdio.h>

int main(void)
{
	int x , y , d , tmp;
	scanf("%d %d",&x,&y);
	if(x < y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}
	d = x % y;
	while(d != 0)
	{
		x = y;
		y = d;
		d = x % y;
	}
	printf("%d\n",y);
}
