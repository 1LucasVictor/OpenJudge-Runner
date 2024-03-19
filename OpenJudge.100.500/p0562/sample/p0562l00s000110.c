#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int a, b, ans = 1;
    scanf("%d%d", &a, &b);

    while ( a * ans < b )
        ans++;

    printf("%d\n", ans);
    return EXIT_SUCCESS;
} 