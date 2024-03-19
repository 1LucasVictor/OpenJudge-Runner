#include "stdio.h"

int main()
{
	double a, b, c, d, e, f, x, y;

	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		x = (c*e - f*b)/(a*e - b*d);
		y = (c*d - f*a)/(b*d - a*e);

		printf("%0.3f %0.3f\n", x, y);
	}

	return 0;
}