#include <stdio.h>

int main(void)
{
    double a,b,c,d,e,f;
    double c2,f2,b2,e2;
    double x,y;

    while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
        c2 = c * d;
        f2 = f * a;
        b2 = b * d;
        e2 = e * a;
        y = (c2 - f2) / (b2 - e2);
        x = (c - (b * y)) / a;

        printf("%.3lf %.3lf\n", x, y);
    }
    return (0);
}

