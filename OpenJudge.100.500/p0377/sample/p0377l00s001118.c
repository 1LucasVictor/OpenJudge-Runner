#include<stdio.h>
#define EXIST 1
#define LOST  0

int main(void)
{
    int i, j, n, rank;
    char suit;
    int cards[4][13];
    char s[4] = { 'S', 'H', 'C', 'D'};
    
    /* 初期化 */
    for ( i=0; i<4; ++i)
        for ( j=0; j<13; ++j)
            cards[i][j] = LOST;
    
    scanf("%d\n", &n);
    for ( i=0; i<n; ++i){
        scanf("%c %d\n", &suit, &rank);
        switch (suit) {
            case 'S':
                cards[0][rank-1] = 1;
                break;
            case 'H':
                cards[1][rank-1] = 1;
                break;
            case 'C':
                cards[2][rank-1] = 1;
                break;
            case 'D':
                cards[3][rank-1] = 1;
                break;
        }
    }
    
    /* 書き出し */
    for ( i=0; i<4; ++i)
        for ( j=0; j<13; ++j)
            if ( cards[i][j] == LOST)
                printf("%c %d\n", s[i], j+1);
    return 0;
}

