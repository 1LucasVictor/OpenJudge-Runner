#include <stdio.h>

int main(int argc, const char * argv[]) {
    int cards[4][13], n, x;
    char ch;
    for(int i=0; i<4; i++){
        for(int j=0; j<13; j++){
            cards[i][j] = 0;
        }
    }
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%c", &ch);
        scanf("%c %d", &ch, &x);
        if(ch == 'S'){
            cards[0][x-1] = 1;
        }else if(ch == 'H'){
            cards[1][x-1] = 1;
        }else if(ch == 'C'){
            cards[2][x-1] = 1;
        }else if(ch == 'D'){
            cards[3][x-1] = 1;
        }
    }
    
    for(int j=0; j<13; j++){
        if(cards[0][j]!=1){
            printf("S %d\n", j+1);
        }
    }
    for(int j=0; j<13; j++){
        if(cards[1][j]!=1){
            printf("H %d\n", j+1);
        }
    }
    for(int j=0; j<13; j++){
        if(cards[2][j]!=1){
            printf("C %d\n", j+1);
        }
    }
    for(int j=0; j<13; j++){
        if(cards[3][j]!=1){
            printf("D %d\n", j+1);
        }
    }
    return 0;
}

