#include <stdio.h>

int main() {
	double a, b, c, d, e, f;
	double x, y;
	/* ax + by = c
	   dx + ey = f */

	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF) {
		x = (e * c - b * f) / (e * a - b * d) + 0.00001;
		y = (d * c - a * f) / (d * b - a * e) + 0.00001;

		printf("%.3f %.3f\n", x, y);
	}

	return 0;
}