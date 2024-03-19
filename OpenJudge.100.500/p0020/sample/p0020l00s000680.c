#include <stdio.h>
#include <math.h>

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

        double judge = (x[1] - x[0]) * (y[3] - y[2])
                        - (x[3] - x[2]) * (y[1] - y[0]);
        if (fabs(judge) < 0.00001) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}