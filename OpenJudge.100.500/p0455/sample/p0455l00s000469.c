#include <stdio.h>
int main()
{
    int a, ans;
    scanf("%d", &a);
    ans = (a + a * a + a * a * a);
    printf("%d", ans);
    return 0;
}
