#include <stdio.h>

int change(char MARK){
    if (MARK=='S') return 0;
    else if (MARK=='H') return 1;
    else if (MARK=='C') return 2;
    else if (MARK=='D') return 3;
    else return 4;
}

char re_change(int NUM){
    if (NUM==0) return 'S';
    else if (NUM==1) return 'H';
    else if (NUM==2) return 'C';
    else if (NUM==3) return 'D';
    else return EOF;
}

int main(void){
    int i, j, k, n, suit;
    char mark;
    int CARD[4][13]={};
    
    scanf("%d\n", &n);
    
    for(i=0; i<n; i++){
        scanf("%c %d\n", &mark, &suit);
        CARD[change(mark)][suit-1]=1;
    }
    
    for(j=0; j<4; j++){
        for(k=0; k<13; k++){
            if(CARD[j][k]!=1){
                printf("%c %d\n", re_change(j), k+1);
            }
        }
    }
    return 0;
}
