#include <stdio.h>

int main(void)
{
    int a, b, ab;
    scanf("%d %d", &a, &b);
    if (a < 0)
        a = a * -1;
    if (b < 0)
        b = b * -1;
    ab = (a + b) % 2;
    if (ab == 0)
        printf("%d", (a + b) / 2);
    else
        printf("IMPOSSIBLE");
}