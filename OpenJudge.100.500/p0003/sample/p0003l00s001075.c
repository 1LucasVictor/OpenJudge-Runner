#include <stdio.h>

int main(void){

	double a, b, c, d, e, f;

	double x, y;

	while ((scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f))!=EOF){

		x = (c*e - b*f) / (a*e - b*d);
		y = (a*f - c*d) / (a*e - b*d);

		x *= 1000; x = x + (x > 0 ? 0.5 : -0.5); x = (int)x;
		y *= 1000; y = y + (y > 0 ? 0.5 : -0.5); y = (int)y;
		printf("%.3f %.3f\n", x / 1000, y / 1000);
	}

	return 0;
}