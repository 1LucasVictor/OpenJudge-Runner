#include <stdio.h>

int main() {
    int n, cards[4][13], i, j, number;
    char card, n2s[4] = "SHCD";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            cards[i][j] = 0;
        }
    }
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) {
        scanf("%c %d", &card, &number);
        getchar();
        int suit = 0;
        switch (card) {
            case 'S':
                suit = 0;
                break;
            case 'H':
                suit = 1;
                break;
            case 'C':
                suit = 2;
                break;
            case 'D':
                suit = 3;
                break;
        }
        cards[suit][number - 1] = 1;
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            if (!cards[i][j]) {
                printf("%c %d\n", n2s[i], j + 1);
            }
        }
    }
    return 0;
}