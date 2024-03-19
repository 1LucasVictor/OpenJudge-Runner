#include <stdio.h>
#include <math.h>

int main(void)
{
    int d, n, x;

    scanf("%d%d", &d, &n);

    x = (int)(pow(100, d) * n);

    printf("%d\n", x);

    return 0;
}