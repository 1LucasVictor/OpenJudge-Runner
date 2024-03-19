#include <stdio.h>

int main(void)
{
    int x, a, out=0;

    scanf("%d%d", &x, &a);

    if (x>=a) out = 10;

    printf("%d\n", out);

    return 0;
}