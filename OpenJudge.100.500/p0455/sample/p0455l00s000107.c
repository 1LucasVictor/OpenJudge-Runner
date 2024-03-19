#include <stdio.h>

int main(void) {
    int n, r;
    if(scanf("%d", &n) == 1) {
        if(n >= 1 && n <= 10) {
            r = n + n*n + n*n*n;
        }
    }

    printf("%d\n", r);

    return 0;
}
