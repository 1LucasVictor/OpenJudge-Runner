#include <stdio.h>

int main(){
    int n;
    int i,j;
    int card[5][14];
    for(i=1; i<=4; i++){
        for(j=1; j<=13; j++){
            card[i][j] = 0;
        }
    }
    
    char suit;
    char op;
    int rank;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        op = getchar();
        scanf("%c %d", &suit, &rank);
        if(suit == 'S') card[1][rank] = 1;
        else if(suit == 'H') card[2][rank] = 1;
        else if(suit == 'C') card[3][rank] = 1;
        else if(suit == 'D') card[4][rank] = 1;
    }

    for(i=1; i<=4; i++){
        for(j=1; j<=13; j++){
            if(card[i][j] == 0){
                
                if(i==1) printf("S %d\n", j);
                else if(i==2) printf("H %d\n", j);
                else if(i==3) printf("C %d\n", j);
                else if(i==4) printf("D %d\n", j);
            }
        }
    }
}

