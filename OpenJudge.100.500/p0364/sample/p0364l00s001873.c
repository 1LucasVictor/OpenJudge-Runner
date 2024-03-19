
#include<stdio.h>

int main(void)
{
	int W,H,x,y,r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	(((-100<=x)&&(x<=100))&&((y>=-100)&&(y<=100)));
	(((0<W)&&(W>100))&&((0<H)&&(H<100))&&((0<r)&&(r<100)));
	if(((x+r) > W)||((x+r) <= 0))
	{
		printf("No\n");
	}
	else
	{
		if(((y+r) >H)||((y+r) <= 0))
		{
		printf("No\n");
		}	
	else
	{
		printf("Yes\n");
	}
	}
	
	return 0;
}