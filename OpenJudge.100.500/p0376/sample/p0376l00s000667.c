#include <stdio.h>
    
int main()
{
    int n;
    
    scanf("%d", &n);
    
    int a[n], i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n / 2; i++) {
        int tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
    }
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            putchar(' ');
        }
    }
    putchar('\n');
    
    return 0;
}