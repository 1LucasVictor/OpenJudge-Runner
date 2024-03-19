#include <stdio.h>
int main(void)
{
    int i, n;
    float x1, x2, x3, x4, y1, y2, y3, y4;
    double AB, CD;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%f %f %f %f %f %f %f %f\n", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        AB = (y2 - y1) / (x2 - x1);
        CD = (y4 - y3) / (x4 - x3);
        if (AB == CD)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

