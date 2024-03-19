#include <stdio.h>

/* プロトタイプ宣言 */
void initCardState(int list[4][13]);
void changeState(int suits, int ranks, int list[4][13]);
void printState(int list[4][13]);

/* main関数 */
int main() {
    int list_card[4][13];
    int kaisu;
    char suits;
    int ranks;

    initCardState(list_card);

    scanf("%d", &kaisu);

    for (int i = 0; i < kaisu; i++) {
        scanf("\n%c %d", &suits, &ranks);
        changeState(suits, ranks, list_card);
    }

    printState(list_card);

    return 0;
}

/* sub関数 */
void initCardState(int list[4][13])
{
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++){
            list[i][j] = 0;
        }
    }
}

void changeState(int suits, int ranks, int list[4][13])
{
    if (suits == 'S') {
        list[0][ranks - 1] = 1;
    }
    else if (suits == 'H') {
        list[1][ranks - 1] = 1;
    }
    else if (suits == 'C') {
        list[2][ranks - 1] = 1;
    }
    else if (suits == 'D') {
        list[3][ranks - 1] = 1;
    }
    else {
        /* NOP */
    }
}

void printState(int list[4][13])
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (list[i][j] == 0) {
                if (i == 0) {
                    printf("%c %d\n", 'S', j + 1);
                }
                else if (i == 1) {
                    printf("%c %d\n", 'H', j + 1);
                }      
                else if (i == 2) {
                    printf("%c %d\n", 'C', j + 1);
                }
                else if (i == 3) {
                    printf("%c %d\n", 'D', j + 1);
                }
                else {
                    /* NOP */
                }
            }
            else {
                /* NOP */
            }
        }
    }
}

