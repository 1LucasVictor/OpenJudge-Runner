#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f;
    int det;
    double x, y;

    while (scanf("%d %d %d %d %d %d",
           &a, &b, &c, &d, &e, &f) != EOF) {
        det = a * e - b * d;
        x = (double)(e * c + -b * f) / det;
        y = (double)(-d * c + a * f) / det;
        printf("%.3f %.3f\n", x + 0, y + 0);
    }

    return 0;
}