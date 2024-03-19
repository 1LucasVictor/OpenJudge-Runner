#include <stdio.h>
#define N 1000000

int main(void) {

    int i, j, k;
    int n, H[N], W[N];

    for (i = 0; i < N; i++) {
        H[i] = 0;
        W[i] = 0;
    }

    i = 0;
    while (1) {
        scanf("%d%d", &H[i], &W[i]);
        if ((H[i] == 0) && (W[i] == 0)) {
            break;
        }
        i++;
    }
    n = i;

    for (i = 0; i < n; i++) {
        for (j = 1; j <= H[i]; j++) {
            for (k = 1; k <= W[i]; k++) {
                if ((j == 1) || (j == H[i])) {
                    printf("#");
                } else {
                    if ((k == 1) || (k == W[i])) {
                        printf("#");
                    } else {
                        printf(".");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;

}