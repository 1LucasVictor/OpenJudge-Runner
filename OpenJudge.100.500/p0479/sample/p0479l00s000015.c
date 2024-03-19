#include <stdio.h>

int main()
{
    int n, a[200010], a_[200010] = {0};
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        a_[a[i] - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a_[i]);
    }

    return 0;
}