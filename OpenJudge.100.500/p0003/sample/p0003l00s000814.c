#include <stdio.h>

int main(void) {
	
	int a, b, c, d, e, f;
	double x, y;
	
	while( scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) != EOF){
		y = (c*d - f*a) / (b*d - e*a);
		x = (c - b*y) / a;
		printf("%.3lf %.3lf\n", x, y);
		}
	
	return 0;
}