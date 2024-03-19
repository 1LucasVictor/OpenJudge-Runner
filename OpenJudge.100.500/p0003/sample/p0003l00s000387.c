#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, d, e, f, x, y, det;

    while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF)
    {
        det = a*e - b*d;
        x = (c*e - b*f)/det;
        y = (a*f - c*d)/det;
        if(x == fabs(x))
            x = fabs(x);
        else if(y == fabs(y))
            y = fabs(y);
        printf("%.3f %.3f\n", x, y);
    }

    return 0;
}
