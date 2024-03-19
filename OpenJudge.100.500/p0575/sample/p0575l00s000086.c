#include <stdio.h>

int main(void)
{
    int x, a;
    int ans = 0;
    scanf("%d%d", &x, &a);

    if (x >= a)
        ans = 10;

    printf("%d\n", ans);
    return 0;
}