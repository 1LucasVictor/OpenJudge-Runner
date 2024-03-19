#include <stdio.h>

int main()
{
    int n, a, ans[200010] = {0};
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a);
        ans[a - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ans[i]);
    }

    return 0;
}