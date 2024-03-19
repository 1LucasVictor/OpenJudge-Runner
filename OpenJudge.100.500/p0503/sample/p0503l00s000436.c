#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(void) {
    int i, j;
    int n;
    int a[200000];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(a[0]), asc);

    for (i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
