#include <stdio.h>

int main(void) {
    int n, a, b;
    int t;
    int ans;

    scanf("%d %d %d\n", &n, &a, &b);

    t = n * a;
    ans = b;
    if( t < b ) {
        ans = t;
    }
    printf("%d\n", ans);

    return 0;
}
