#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double a, b, p, c, d, q, x, y;
    while (scanf ("%lf %lf %lf %lf %lf %lf", &a, &b, &p, &c, &d, &q)!=EOF){
        x = (p*d - b*q) / (a*d - b*c);
        y = (a*q - p*c) / (a*d - b*c);
        if (x == 0){
            x = abs(x);
        }
        if (y == 0){
            y = abs(y);
        }
        printf ("%0.3lf %0.3lf\n", x, y);
    }
    return 0;
}