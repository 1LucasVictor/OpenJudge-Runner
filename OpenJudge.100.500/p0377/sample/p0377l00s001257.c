#include <stdio.h>

int main(){
    int cards[4][13], i, j, n, x;
    char ch;
    for(i=0; i<4; i++) for(j=0; j<13; j++) cards[i][j] = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf(" %c %d", &ch, &x);
        switch(ch){
            case 'S': cards[0][x-1] = 1; break;
            case 'H': cards[1][x-1] = 1; break;
            case 'C': cards[2][x-1] = 1; break;
            case 'D': cards[3][x-1] = 1; break;
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<13; j++){
            if(cards[i][j] == 0){
                switch(i){
                    case 0: printf("S "); break;
                    case 1: printf("H "); break;
                    case 2: printf("C "); break;
                    case 3: printf("D "); break;
                }
                printf("%d\n", j+1);
            }
        }
    }
    return 0;
}
