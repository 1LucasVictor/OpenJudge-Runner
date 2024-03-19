#include <stdio.h>

int main(void)
{
    int n;
    int a[128];
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", a + i);
    for (i = n - 1; i >= 0; i--) printf("%d%c", a[i], "\n "[i > 0]);

    return 0;
}