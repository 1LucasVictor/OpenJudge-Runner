#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;
    int ans = 0;
    scanf("%d%d%d", &a, &b, &c);

    if (c - (a - b) > 0)
        ans = c - (a - b);
    printf("%d\n", ans);
    return 0;
}