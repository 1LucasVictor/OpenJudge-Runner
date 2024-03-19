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
        /*
           for (i = 0; i < 4; i++) {
           printf("x[%d] = %f, y[%d] = %f\n", i, x[i], i, y[i]);
           }
         */

        if (x[0] != x[1] && x[2] != x[3]) {
            double slope[2];
            slope[0] = (y[1] - y[0]) / (x[1] - x[0]);
            slope[1] = (y[3] - y[2]) / (x[3] - x[2]);
            if (fabs(slope[1] - slope[0]) < 0.00001) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            if (fabs(x[1] - x[0]) < 0.00001 && fabs(x[3] - x[2]) < 0.00001) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
        /*
           for (i = 0; i < 2; i++) {
           printf("slope[%d] = %f\n", i, slope[i]);
           }
         */
    }

    return 0;
}