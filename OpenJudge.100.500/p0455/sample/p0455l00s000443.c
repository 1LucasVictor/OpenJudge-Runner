#include <stdio.h>

int main()
{
    int ans;
    int a;

    scanf("%d", &a);
    ans = a + a * a + a * a * a;
    printf("%d", ans);
    return 0;
}