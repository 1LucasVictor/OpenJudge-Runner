#include <stdio.h>

int main()
{
    int n, i, j, buka;
    int a[100000];

    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        scanf("%d", &a[i]);
    } 

    for (i = 0; i < n; i++) {
        buka = 0;
        for (j = 1; j < n; j++) {
            if (a[j] == i+1)
                buka++;
        }
        printf("%d\n", buka);
    }

    return 0;
}