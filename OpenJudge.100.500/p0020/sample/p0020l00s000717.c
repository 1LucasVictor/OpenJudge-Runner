#include <stdio.h>
#include <math.h>

int main(void)
{
    double x[4], y[4];
    double slope1, slope2;
    int n;
    int i;

    scanf("%d", &n);
    while (n-- > 0){
        for (i = 0; i < 4; i++){
            scanf("%lf %lf", &x[i], &y[i]);
        }
        slope1 = (y[1] - y[0]) / (x[1] - x[0]);
        slope2 = (y[3] - y[2]) / (x[3] - x[2]);
        if (fabs(slope1 - slope2) < 1e-9){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return (0);
}