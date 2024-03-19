#include <stdio.h>

int main(void)
{
    int N, A, B, t;

    scanf("%d %d %d", &N, &A, &B);

    t = N * A;

    if (t <= B)
    {
        printf("%d", t);
    } else
    {
        printf("%d", B);
    }

    return 0;
}