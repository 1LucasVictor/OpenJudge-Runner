#include<stdio.h>

int main(void) {
	double a, b, c, d, e, f,x,y;

	while (scanf("%lf %lf %lf %lf %lf %lf", &a,&b, &c, &d, &e, &f) !=EOF) {
		x = (e*c - b*f) / (a*e - b*d);
		y = (f - d*x) / e;
		printf("%.3lf %.3lf ", x, y);
	}
	return 0;
}