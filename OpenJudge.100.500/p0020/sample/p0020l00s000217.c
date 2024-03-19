#include <stdio.h>

int main(void)
{
	double ax, bx, cx, dx;
	double ay, by, cy, dy;
	double abx, aby, cdx, cdy;
	int n, i;
	
	scanf("%d", &n);
	
	
	for (i = 0; i < n; i++){
		
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy);
		
		abx = bx - ax;
		aby = by - ay;
		cdx = dx - cx;
		cdy = dy - cy;
		
		if (abx == cdx && aby == cdy)printf("YES\n");
		else if (abx == (cdx * -1) && aby == (cdy * -1))printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}