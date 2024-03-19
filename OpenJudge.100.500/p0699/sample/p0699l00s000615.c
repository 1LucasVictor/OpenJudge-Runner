#include <stdio.h>

int main(void)
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if (A == 7) {
        if (B == 5 && C == 5) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else if (B == 7) {
        if (C == 5 && A == 5) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else if (C == 7) {
        if (A == 5 && B == 5) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        printf("NO\n");
    }
    return 0;
}