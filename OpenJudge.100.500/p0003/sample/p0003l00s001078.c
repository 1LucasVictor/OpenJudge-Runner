#include <stdio.h>
#define EPS (0.0001)

int main(void)
{
	double a, b, c, d, e, f;
	
	while (scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF){
		printf("%.3f %.3f\n",(c * e - f * b) / (a * e - d * b) + EPS, (a * f - d * c) / (a * e - d * b) + EPS);
	}
	
	return (0);
}