#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f;
    int det;

    while (scanf("%d %d %d %d %d %d",
           &a, &b, &c, &d, &e, &f) != EOF) {
        det = a * e - b * d;
        printf("%.3f %.3f\n",
               (double)(e * c + -b * f) / det,
               (double)(-d * c + a * f) / det);
    }

    return 0;
}