#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    int ans;
    scanf("%d%d", &a, &b);

    if (a % 2 != b % 2)
    {
        puts("IMPOSSIBLE");
        return 0;
    }

    for (ans = 0; ans < a + b; ans++)
        if (abs(a - ans) == abs(b - ans))
            break;

    printf("%d\n", ans);
    return 0;
}