#include <stdio.h>

int main(void) {
    int S[14] = {};
    int H[14] = {};
    int C[14] = {};
    int D[14] = {};
    int n, number;
    char suit;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        (void)getchar();
        scanf("%c %d", &suit, &number);

        if (suit == 'S') S[number] = 1;
        else if (suit == 'H') H[number] = 1;
        else if (suit == 'C') C[number] = 1;
        else if (suit == 'D') D[number] = 1;
    }

    for (int i = 1; i <= 13; i++) {
        if (S[i] == 0) printf("S %d\n", i);
    }
    for (int i = 1; i <= 13; i++) {
        if (H[i] == 0) printf("H %d\n", i);
    }
    for (int i = 1; i <= 13; i++) {
        if (C[i] == 0) printf("C %d\n", i);
    }
    for (int i = 1; i <= 13; i++) {
        if (D[i] == 0) printf("D %d\n", i);
    }

    return 0;
}
