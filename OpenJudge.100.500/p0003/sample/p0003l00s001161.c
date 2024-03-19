#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float a, a1, b, c, d, e, f;
    float t1, t2;
    float x;
    float y;
    int i = 0, j = 0;

    while (scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF){
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
		
		x += 0;
		y += 0;
		
		printf("%.3lf %.3lf\n", x, y);
    }
    return (0);
}