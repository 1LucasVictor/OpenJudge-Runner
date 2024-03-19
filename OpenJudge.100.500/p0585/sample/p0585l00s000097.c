#include <stdio.h>
int a, b, t, ans, i;
int main(void)
{
    scanf("%d%d%d", &a, &b, &t);
    for (i = 1; a * i < t + 0.5; i++)
    {
        ans += b;
    }
    printf("%d", ans);
}