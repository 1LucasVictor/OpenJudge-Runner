#include <stdio.h>

#define LIM 1000000000

int main (void) {
    int a, b;
    int c;
    int k;

    scanf("%d %d", &a, &b);

    if (a < b) {//aが大きい
        c = a;
        a = b;
        b = c;
    } 

    for (k = a/2; k < LIM; k++) {
        if (a-k == k-b) {
            printf("%d\n", k);
            return 0;
        }

    }
    puts("IMPOSSIBLE");

    return 0;
}