#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
	double a, b, c, d, e, f;
	double x, y;
	
	while (scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF){
		y = (c * d - f * a) / (b * d - e * a);
		x = (c - b * y) / a;
		printf("%.3lf %.3lf\n", x, y);
	}
	
	return (0);
}