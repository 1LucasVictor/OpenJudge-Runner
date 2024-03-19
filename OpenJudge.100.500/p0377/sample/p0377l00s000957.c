#include <stdio.h>

int main(void){
    int n, m,  i, j;
    int cards[][13] = {{}, {}, {}, {}};
    char ch;
    char c[4] = {'S', 'H', 'C', 'D'};

    scanf("%d", &n);
    for(i = 0; i < 2 * n; i++){
        scanf("%c %d", &ch, &m);
        switch(ch){
            case 'S':
                 cards[0][m - 1] = 1;
                 break;
            case 'H':
                 cards[1][m - 1] = 1;
                 break;
            case 'C':
                 cards[2][m - 1] = 1;
                 break;
            case 'D':
                 cards[3][m - 1] = 1;
                 break;
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 13; j++){
            if(!cards[i][j])
                printf("%c %d\n", c[i], j + 1);
        }
    }
    return 0;
}
  