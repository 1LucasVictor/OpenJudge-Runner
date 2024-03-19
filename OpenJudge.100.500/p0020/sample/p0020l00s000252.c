#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    float x1, x2, x3, x4, y1, y2, y3, y4;
    float res1, res2;
    int k, i;

    scanf("%d", &k);

    for (i = 0; i < k; i++){
        scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        res1 = (y2 - y1) / (x2 - x1);
        res2 = (y4 - y3) / (x4 - x3);
        if (res1 == res2){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return (0);
}