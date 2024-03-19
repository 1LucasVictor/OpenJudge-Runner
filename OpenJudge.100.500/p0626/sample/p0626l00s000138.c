# include <stdio.h>

int main (void) {
    int D, N;

    scanf("%d%d", &D, &N);

    if (D == 0) {
        printf ("%d\n", N);
    }
    if (D == 1) {
        printf ("%ld\n", 100 * N);
    }
    if (D == 2) {
        printf ("%ld\n", 10000 * N);
    }

    return 0;
}