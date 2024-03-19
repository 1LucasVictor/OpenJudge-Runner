#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int D, N, S;
    scanf("%d%d", &D, &N);
    if (D == 0) {
        S = N;
        if (N == 100) S = 101;
    } else if (D == 1) {
        S = N*100;
        if (N == 100) S = 10100;
    } else {
        S = N*10000;
        if (N == 100) S = 1010000;
    }
    printf("%d\n", S);
    return 0;
}