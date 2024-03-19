#include <stdio.h>

#define N 14

int main() {
    int num, n, i, j, card[4][N];       //0 = S, 1 = H, 2 = C, 3 = D
    char c;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < N; j++) {
            card[i][j] = 0;
        }
    }

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%*c%c%d", &c, &num);

        if (c == 'S') {
            card[0][num] = 1;
        }
        else if (c == 'H') {
            card[1][num] = 1;
        }
        else if (c == 'C') {
            card[2][num] = 1;
        }
        else if (c == 'D') {
            card[3][num] = 1;
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 1; j < N; j++) {
            if (card[i][j] == 0) {
                if (i == 0) {
                    printf("S %d\n", j);
                }
                else if (i == 1) {
                    printf("H %d\n", j);
                }
                else if (i == 2) {
                    printf("C %d\n", j);
                }
                else if (i == 3) {
                    printf("D %d\n", j);
                }
            }
        }
    }

    return 0;
}

