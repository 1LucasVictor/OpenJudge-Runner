#include <stdio.h>

int main(void)
{
	double a, b, c, d, e, f, x, y;
	while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF)
	{
		x = (b*f - e*c)/(b*d - a*e);
		y = (c - a*x)/b;
		if (x < 0.0005 && -0.0005 <= x)
			x = 0.0;
		if (y < 0.0005 && -0.0005 <= y)
			y = 0.0;
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}