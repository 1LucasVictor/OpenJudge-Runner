#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int i, a[n];
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    if (n != 0) {
        printf("%d", a[n-1]);
    }
    for (i=1; i<n; i++) {
        printf(" %d", a[n - 1 - i]);
    }
    printf("\n");

    return 0;
}
