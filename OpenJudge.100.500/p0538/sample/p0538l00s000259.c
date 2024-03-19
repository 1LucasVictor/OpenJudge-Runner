#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int a, b;
    scanf("%d%d", &a, &b);
    if ( a >= 10 || b >= 10 )
        printf("-1\n");
    else
        printf("%d\n", a*b);
    return EXIT_SUCCESS;
}
