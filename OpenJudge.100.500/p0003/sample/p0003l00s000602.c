#include <stdio.h>

int main(void)
{
    double a, a1, b, c, d, e, f;
    double t1, t2;
    double x;
    double y;

    while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
        x = (c * e - f * b) / (a * e - d * b) + 0.0001;
		y = (a * f - d * c) / (a * e - d * b) + 0.0001;
		
		printf("%.3lf %.3lf\n", x, y);
    }
    return (0);
}