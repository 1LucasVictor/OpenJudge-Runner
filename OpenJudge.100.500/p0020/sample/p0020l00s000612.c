#include <stdio.h>
#include <math.h>

int main(void)
{
    float x[4], y[4];
    float slope1, slope2;
    int n;
    int i;

    scanf("%d", &n);
    while (n-- > 0){
        for (i = 0; i < 4; i++){
            scanf("%f %f", &x[i], &y[i]);
        }
        slope1 = (y[1] - y[0]) / (x[1] - x[0]);
        slope2 = (y[3] - y[2]) / (x[3] - x[2]);
        if (slope1 == slope2){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return (0);
}