#include <stdio.h>

int main(void)
{
    int i, j;

    int n;
    scanf("%d", &n);

    float x[4], y[4];
    float slope1, slope2;

    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%f %f", &x[j], &y[j]);
        }
        slope1 = (y[1] - y[0]) / (x[1] - x[0]);
        slope2 = (y[3] - y[2]) / (x[3] - x[2]);

        if (slope1 == slope2) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}