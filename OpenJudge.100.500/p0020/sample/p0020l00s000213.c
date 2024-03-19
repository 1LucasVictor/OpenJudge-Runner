#include <stdio.h>

int main(void)
{
    int datesets;
    scanf(" %d", &datesets);

    double x1, y1, x2, y2, x3, y3, x4, y4;
    double det;
    while (datesets--) {
        scanf(" %lf %lf %lf %lf %lf %lf %lf %lf",
                &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        det = (x2 - x1) * (y4 - y3) - (x4 - x3) * (y2 - y1);
        if (-1e-6 < det && det < 1e-6) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}