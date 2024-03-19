#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int a, b, num = 1, ans = 0;
    scanf("%d%d", &a, &b);

    while ( num < b )
    {   /* A を一つ使う */
        num += a - 1;
        ans++;
    }

    printf("%d\n", ans);
    return EXIT_SUCCESS;
}  