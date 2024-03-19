#include <stdio.h>

int main(void)
{
	double a, b, c, d, e, f;
	double x, y;

	while (~scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f)){
		x = (e * c - b * f) / (a * e - b * d);
		y = (f - d * x) / e;

		if (x == 0.0) x = 0.0;
		if (y == 0.0) y = 0.0;

		printf("%.3lf %.3lf\n", x, y);
	}

	return (0);
}