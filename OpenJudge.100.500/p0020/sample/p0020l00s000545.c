#include <stdio.h>

int main(void)
{
    int n, i;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double e;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        if (x1 == x2 || x3 == x4) {
            printf("%s\n", x1 == x2 && x3 == x4 ? "YES" : "NO");
        } else {
            e = (y2 - y1) * (x4 - x3) - (y4 - y3) * (x2 - x1);
            printf("%s\n", (-1e-8 < e && e < 1e-8) ? "YES" : "NO");
        }
    }

    return 0;
}