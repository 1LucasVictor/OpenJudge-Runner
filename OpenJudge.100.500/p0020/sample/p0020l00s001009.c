#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    double x1, x2, x3, x4, y1, y2, y3, y4;
    double ans1, ans2;
    int k, i;

    scanf("%d", &k);

    for (i = 0; i < k; i++){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        ans1 = (y1 - y2) / (x1 - x2);
        ans2 = (y3 - y4) / (x3 - x4);
        if (ans1 == ans2){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return (0);
}