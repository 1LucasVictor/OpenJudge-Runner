#include <stdio.h>
 
int main()
{
    int a[10], n, i, j;
    int sa = -10;
 
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
 
    for (i = 1; i < n; i++) {
        for (j = i - 1; j >= 0; j--) {
            if (sa < a[i] - a[j])
                sa = a[i] - a[j];
        }
    }
 
    printf("%d\n", sa);
 
    return 0;
}