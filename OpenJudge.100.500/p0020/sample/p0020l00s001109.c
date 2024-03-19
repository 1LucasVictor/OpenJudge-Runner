#include <stdio.h>

int main(void)
{
    int i;

    int datesets;
    scanf("%d", &datesets);

    while (datesets--) {
        double x[4], y[4];
        for (i = 0; i < 4; i++) {
            scanf(" %lf %lf", &x[i], &y[i]);
        }

        double slope[2];
        if (x[0] != x[1] && x[2] != x[3]) {
            slope[0] = (y[1] - y[0]) / (x[1] - x[0]);
            slope[1] = (y[3] - y[2]) / (x[3] - x[2]);
            if (slope[0] == slope[1]) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            if (x[0] == x[1] && x[2] == x[3]) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}