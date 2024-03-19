#include <stdio.h>

/*
	ax + by = c
	dx + ey = f

	ax = c - by
	x = (c - by) / a

	dx = f - ey
	x = (f - ey) / d

	(c - by) / a = (f - ey) / d
	d(c - by) = a(f - ey)
	dc - bdy = af - aey
	aey - bdy = af - dc
	y(ae - bd) = af - dc
	y = (af - dc) / (ae - bd)
*/

int main() {
	double a, b, c, d, e, f, x, y;
	while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF) {
		y = (a * f - d * c) / (a * e - b * d);
//		x = (f - e * y) / d;
		x = (c - b * y) / a;

		if (x > (double)-0.001 && x <= (double)0) x = 0;
		if (y > (double)-0.001 && y <= (double)0) y = 0;

		printf("%.3lf %.3lf\n", x, y);
	}
	return 0;
}