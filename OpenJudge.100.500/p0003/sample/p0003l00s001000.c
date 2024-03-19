#include<stdio.h>

int main() {
	double a,b,c,d,e,f,x,y;
	while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF) {
		y = (c - a*f/d) / (b - a*e/d);
		x = (c - b*y) / a;
		if (x > -0.0005 && x < 0) {
			x = 0;
		}
		if (y > -0.0005 && y < 0) {
			y = 0;
		}
		printf("%.3lf %.3lf",x,y);
	}
	
	return 0;
}