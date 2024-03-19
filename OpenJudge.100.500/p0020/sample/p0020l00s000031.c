#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    double x1, y1, x2, y2, x3, y3, x4, y4;
    while (n--) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
                &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        if ((x1 - x2) * (y3 - y4) == (y1 - y2) * (x3 - x4)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}