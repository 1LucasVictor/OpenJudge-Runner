#include <stdio.h>

int main()
{
        int a, b, c, d, e, f;
        double x, y;

        while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) > 0) {
                x = (double)(e*c-b*f)/ (a*e-d*b);
                y = (double)(a*f-d*c)/ (a*e-d*b);
                x == -0.0 ? x = 0.0 : x;
                y == -0.0 ? y = 0.0 : y;
                printf("%.3f %.3f\n", x, y);
        }
        return 0;
}