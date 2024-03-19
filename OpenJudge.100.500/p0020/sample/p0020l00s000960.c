#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n;
	int i;
	scanf("%d",&n);
	for (i = 0; i < n; i += 1)
	{
		double x1,y1,x2,y2,x3,y3,x4,y4;
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		x2-=x1;
		y2-=y1;
		x4-=x3;
		y4-=y3;
		if(abs(x2*y4-y2*x4) < 0.000000001)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}