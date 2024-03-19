# include <stdio.h>

int main (void) {
    int D, N;

    scanf("%d%d", &D, &N);

    if (D == 0) {
        if (N == 100) {
            printf ("%d\n", N + 1);
        } else {
            printf ("%d\n", N);
        }
    }
    if (D == 1) {
        if (N == 100) {
            printf ("%d\n", 101 * 100);
        } else {
            printf ("%d\n", N * 100);
        }
    }
    if (D == 2) {
        if (N == 100) {
            printf ("%d\n", 101 * 10000);
        } else {
            printf ("%d\n", N * 10000);
        }
    }

    return 0;
}