#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int A;
    int B;
    int C;
    int K;
    int c;
    int ans;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &K);
    if (K <= A)
    {
        ans = K;
    }
    else if (A < K && K <= A + B)
    {
        ans = A;
    }
    else
    {
        ans = A - (K - A - B);
    }
    printf("%d", ans);
    return 0;
}