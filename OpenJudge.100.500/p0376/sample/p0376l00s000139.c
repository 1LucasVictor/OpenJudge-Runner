#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (n >= 1)
        printf("%d", a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
        printf(" %d", a[i]);
    putchar('\n');
    return 0;
}
