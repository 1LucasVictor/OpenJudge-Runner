#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    int i;
    for (i = 0; i <= n - 1; i++) {
        scanf("%d", &a[i]);
    }
    for (i = n - 1; 0 <= i; i--) {
        if (i == 0) {
            printf("%d", a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    return(0);
}
