#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int D;
    int N;

    scanf("%d", &D);
    scanf("%d", &N);

    if(0 > D || D > 2 || 100 < N || N < 1) {
        exit(0);
    }

    if(D == 1) {
        if(N == 100) {
            printf("%d\n", N * 100 + 100);
        } else {
            printf("%d\n", N * 100);
        }
    }
    if(D == 2) {
        if(N == 100) {
            printf("%d\n", N * 100 * 100 + 10000);
        } else {
            printf("%d\n", N * 100 * 100);
        }
    }
    if(D == 0) {
        if(N == 100) {
            printf("%d\n", N + 1);
        } else {
            printf("%d\n", N);
        }
    }

    return 0;
}