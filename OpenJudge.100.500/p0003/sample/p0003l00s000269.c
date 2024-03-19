#include <stdio.h>

int main(void)
{
        for (;;) {
                double a,b,p,c,d,q;
                if (scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &p, &c, &d, &q) == EOF)
                        return 0;
                double x = ((p*d-b*q) / (a*d-b*c));
                double y = ((a*q-p*c) / (a*d-b*c));
                printf("%.3f %.3f\n", x == -0 ? 0 : x, y == -0 ? 0 : y);
        }
}