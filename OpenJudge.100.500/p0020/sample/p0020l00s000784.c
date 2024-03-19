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

        double judge = (x[0] - x[1]) * (y[2] - y[3])
                        - (x[2] - x[3]) * (y[0] - y[1]);
        if (judge == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}