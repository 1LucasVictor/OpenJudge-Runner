#include <stdio.h>

int main(void)
{
    int n, i;
    float x1, y1, x2, y2, x3, y3, x4, y4;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        if (x2 - x1 == 0 || x4 - x3 == 0) {
            printf("%s\n", (x2 - x1) == 0 && (x4 - x3) == 0 ? "YES" : "NO");
        } else {
            printf("%s\n", ((y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1)) ? "YES" : "NO");
        }
    }

    return 0;
}