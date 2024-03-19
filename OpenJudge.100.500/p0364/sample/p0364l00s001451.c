#include <stdio.h>

int main (void)
{
	int W,H,x,y,r,a,b;
	
	scanf("%d %d %d %d %d\n",&W,&H,&x,&y,&r);
	
	a=x+r;
	b=y+r;
	
	if(a>0 && a<W && b>0 && b<H)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	
	return 0;
}