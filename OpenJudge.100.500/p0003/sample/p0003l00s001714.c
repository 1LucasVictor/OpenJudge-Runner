#include <stdio.h>

int main(void)
{
	double xs[2], ys[2], eqs[2];
	double x, y;

	while (~scanf("%lf %lf %lf %lf %lf %lf", xs, ys, eqs, xs + 1, ys + 1, eqs + 1)){
		x = (eqs[0] * ys[1] - eqs[1] * ys[0]) / (xs[0] * ys[1] - xs[1] * ys[0]);
		y = (eqs[1] * xs[0] - eqs[0] * xs[1]) / (xs[0] * ys[1] - xs[1] * ys[0]);

		if (x == 0.0) x = 0.0;
		if (y == 0.0) y = 0.0; 

		printf("%.3lf %.3lf\n", x, y);
	}

	return (0);
}