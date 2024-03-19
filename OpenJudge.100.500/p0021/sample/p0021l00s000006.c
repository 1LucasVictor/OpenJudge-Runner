#include <stdio.h>
#include <limits.h>

int main(void) {
    int n, a, i, mx, acc;

    while (scanf("%d", &n) == 1 && n) {
        for (i = 0, mx = INT_MIN, acc = 0; i < n; i++) {
            scanf("%d", &a);
            acc += a;
            if (mx < acc) mx = acc;
            if (acc < 0) acc = 0;
        }
        printf("%d\n", mx);
    }
    return 0;
}