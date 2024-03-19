#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    double a1, a2, b1, b2, c1, c2, d1, d2;
    double ans1, ans2;
    int k, i;

    scanf("%d", &k);

    for (i = 0; i < k; i++){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &d1, &a2, &b2, &c2, &d2);
        ans1 = (d1 - b1) / (a1 - c1);
        ans2 = (d2 - b2) / (a2 - c2);
        if (ans1 == ans2){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return (0);
}