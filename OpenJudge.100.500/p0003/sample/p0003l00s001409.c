#include <stdio.h>
 
int main()
{
    float a, b, c, d, e, f, x, y;
    while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF) {
        y = (a*f - c*d) / (a*e - b*d);
        x = (c - b*y) / a;
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}