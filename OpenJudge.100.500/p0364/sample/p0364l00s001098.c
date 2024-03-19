#include <stdio.h>
int main()
{
	int W=0,H=0,x=0,y=0,r=0;
	scanf("%d",&W);
	scanf("%d",&H);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&r);
	if(-100<=x&&x<=100,-100<=y&&y<=100,0<W&&W<=100,0<H&&H<=100,0<r&&r<=100)
	{
		if(x-r<0,x+r>W,y-r<0,y+r>H)
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