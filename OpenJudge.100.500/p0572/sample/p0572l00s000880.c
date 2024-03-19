#include <stdio.h>
#include <limits.h>

#define LENGTH 256

int mod(int l, int r) {
    int a, b, n;
    int m = INT_MAX;
    if ((r-l) >= 2019) return 0;
    if (l+2019 < r) r = l + 2019;

    for (a = l; a < r; a++) {
        for ( b = a+1; b <=r; b++) {
            n = (a * b) % 2019;
            if ( n < m) m = n;
            if ( m == 0) return 0;
        }
    }
    return m;
}

int main(void) {
    char input[LENGTH];
    int l, r;
    int n;
    if (scanf("%d %d", &l, &r) == 1);
    n = mod(l ,r);
    printf("%d", n);
    return 0;
}