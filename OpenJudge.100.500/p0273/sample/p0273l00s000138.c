#include <stdio.h>

int main(void)
{
    int i, n;
    int a[64];
    
    scanf("%d", &n);
    for ( i = 0; i <= n; i++)
    {
        if (i == 0 || i == 1)
            a[i] = 1;
        else
            a[i] = a[i - 1] + a[i - 2];
    }
    printf("%d\n", a[n]);
    return 0;
    
}
