#include <stdio.h>
#include <math.h>

int main(void) {

    int D, N;
    double S;

    scanf("%d", &D);
    scanf("%d", &N);

    S = pow(100, D);

    if (N == 100) {
        printf("%d", (N * (int)S) / 100);
    } else {
        printf("%d", N * (int)S );
    }

    return 0;
}