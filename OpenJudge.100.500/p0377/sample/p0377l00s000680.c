#include <stdio.h>

int n, cards[5][14];

int ctoi(char c) {
    switch (c) {
    case 'S': return 1;
    case 'H': return 2;
    case 'C': return 3;
    case 'D': return 4;
    }
}

char itoc(int i) {
    switch (i) {
    case 1: return 'S';
    case 2: return 'H';
    case 3: return 'C';
    case 4: return 'D';
    }
}

int main(void) {
    int i, j, rank;
    char suit[2];
    
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i) {
        scanf("%s %d", suit, &rank);
        ++cards[ctoi(suit[0])][rank];
    }
    
    for (i = 1; i <= 4; ++i) {
        for (j = 1; j <= 13; ++j) {
            if (!cards[i][j]) {
                printf("%c %d\n", itoc(i), j);
            }
        }
    }
    
    return 0;
}