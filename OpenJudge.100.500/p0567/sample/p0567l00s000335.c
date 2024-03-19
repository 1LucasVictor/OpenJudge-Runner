#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int A, B, C, ans;
    scanf("%d %d %d", &A, &B, &C);
    ans = B + C - A;
    if (ans >= 0) {
        printf("%d", ans);
    }
    else {
        printf("0");
    }
    return 0;
}