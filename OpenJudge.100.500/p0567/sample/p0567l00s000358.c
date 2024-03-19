#include <stdio.h>

int main()
{
    int a, b, c, x;
    scanf("%d %d %d", &a, &b, &c);

    x = (c-(a-b));

    if(x < 0)
        x = 0;

    printf("%d\n", x);

    return 0;
}
