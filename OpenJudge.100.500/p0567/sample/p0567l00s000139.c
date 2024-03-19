#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if ( a - b < c ) {
        printf("%d\n", (c - (a-b)));
    }
    else {
        printf("0\n");
    }
    return 0;
}