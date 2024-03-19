#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    double a, a1, b, c, d, e, f;
    double t1, t2;
    double x;
    double y;

    while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
        a1 = a;
        a *= d;	
        b *= d;
        c *= d;
        d *= a1;
        e *= a1;
        f *= a1;

        t1 = b - e;
        t2 = c - f;

        y = t2 / t1;
        x = (c - (b * y)) / a;
		
		x += 0.0001;
		y += 0.0001;
		
		printf("%.3lf %.3lf\n", x, y);
    }
    return (0);
}