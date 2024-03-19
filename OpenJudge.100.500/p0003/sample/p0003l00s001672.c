#include <stdio.h>

int main(void)
{
    double a, b, c, d, e, f;

    while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF)
    {
        double g = -1 * e / b;
        double h = -1 * d / a;

        printf("%.3lf %.3lf\n", (g * c + f) / (g * a + d), (h * c + f) / (h * b + e));
    }

    return 0;
}