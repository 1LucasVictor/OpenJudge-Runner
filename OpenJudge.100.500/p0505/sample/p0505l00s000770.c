#include <stdio.h>

int main(void) {
    int h, n, a[100000], sum = 0;
    int i, err;

    err = scanf("%d", &h);
    err = scanf("%d", &n);

    for (i = 0; i < n; i++) {
        err = scanf("%d", &a[i]);
        sum += a[i];
    }

    if (sum >= h) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}