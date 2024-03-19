#include <stdio.h>

int main()
{
    int a, b, ans;
    scanf("%d %d", &a, &b);

    ans = b/a;
    if(b%a)
        ans++;

    printf("%d\n", ans);

    return 0;
}
