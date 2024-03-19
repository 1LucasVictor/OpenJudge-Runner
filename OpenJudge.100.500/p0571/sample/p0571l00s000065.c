#include <stdio.h>

int main()
{
    int N, A, B;
    1 <= N <= 20;
    1 <= A <= 50;
    1 <= B <= 50;

    scanf("%d %d %d", &N, &A, &B);

    if (N * A <= B)
    {
        printf("%d\n", N * A);
    }
    else
    {
        printf("%d\n", B);
    }
    return 0;
}