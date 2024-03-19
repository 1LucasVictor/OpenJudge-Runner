#include <stdio.h>

int main() {
    int time, num, cards[4][13];
    char suits[] = {'S', 'H', 'C', 'D'};
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 13; j++) {
            cards[i][j] = 0;
        }
    }
    char suit;
    scanf("%d", &time);
    for(int i = 1; i <= time; i++) {
        scanf(" %c %d", &suit, &num);
        for(int j = 0; j < 4; j++) {
            if(suit == suits[j]) cards[j][num - 1] = 1;
        }
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 13; j++) {
            if(cards[i][j] == 0) printf("%c %d\n", suits[i], j+1);
        }
    }
}
