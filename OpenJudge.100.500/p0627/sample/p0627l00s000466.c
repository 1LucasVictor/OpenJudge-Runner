#include <stdio.h>

int main(void)
{
    int A, B, c, d, e, MAX;
    scanf("%d", &A);
    scanf("%d", &B);

    c = A + B;
    d = A - B;
    e = A * B;

    MAX = c;
    if (d > MAX)
        MAX = d;

    if (e > MAX)
        MAX = e;

    printf("%d", MAX);
    return 0;
}