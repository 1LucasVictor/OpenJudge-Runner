#include <stdio.h>

int main(void)
{
    int a, b, c;
    int ans;

    scanf("%d %d %d", &a, &b, &c);

    ans = b+c-a;

    printf("%d\n", ans);

    return 0;
}