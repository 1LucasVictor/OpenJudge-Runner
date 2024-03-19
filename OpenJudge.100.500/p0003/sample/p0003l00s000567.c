#include <stdio.h>

int main(void) {
	
	int a, b, c, d, e, f;
	double x, y;
	
	while( scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) != EOF){
		x = (c*e - f*b) / (a*e - b*d);
		y = (c*d - f*a) / (b*d - e*a);
		//if( -0.0005 < x && x < 0.0005) x = 0.0;
		//if( -0.0005 < y && y < 0.0005) y = 0.0;
		printf("%.3lf %.3lf\n", x, y);
	}
	
	return 0;
}