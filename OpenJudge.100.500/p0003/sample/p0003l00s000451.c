#include <stdio.h>
int main(void) {
	int a, b, c, d, e, f;
	double x, y;
	
	while( scanf("%d",&a) != EOF ) {
		scanf("%d%d%d%d%d",&b,&c,&d,&e,&f);
		x = (c*e - b*f)/(a*e - b*d);
		y = (d*c - a*f)/(b*d - a*e);
		printf("%.3lf %.3lf\n",x,y);
	}
	return(0);
}