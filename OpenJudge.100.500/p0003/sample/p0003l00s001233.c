#include<stdio.h>

int main(void){
	
	double a, b, c, d, e, f;
	double x, y, A;

	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		A = e*a-b*d;

		x = (c*e-b*f)/A;
		y = (a*f-d*c)/A;
		if(x > -0.001 && x < 0.001)x = 0;
		if(y > -0.001 && y < 0.001)y = 0;
		printf("%.3lf %.3lf\n", x, y);
	}

	return 0;
}