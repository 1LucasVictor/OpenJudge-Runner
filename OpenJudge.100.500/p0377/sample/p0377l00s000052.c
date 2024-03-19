#include <stdio.h>

int main(int argc, const char * argv[]) {
    int cards[4][13];
    int i,j,n,Number;
    char Mark;
    
    scanf("%d",&n);
    
    for (i=0; i<4; i++) {
        for (j=0; j<13; j++) {
            cards[i][j]=0;
        }
    }
    
    for (i=0; i<n; i++) {
        scanf(" %c %d",&Mark,&Number);
        
        if (Mark == 'S') {
            cards[0][Number-1]=1;
        }else if(Mark == 'H'){
            cards[1][Number-1]=1;
        }else if(Mark == 'C'){
            cards[2][Number-1]=1;
        }else if(Mark == 'D'){
            cards[3][Number-1]=1;
        }
    }
    for (i=0; i<4; i++) {
        for (j=0; j<13; j++) {
            if(i == 0 && cards[i][j] == 0){
                printf("S %d\n", j+1);
            }else if(i == 1 && cards[i][j] == 0){
                printf("H %d\n", j+1);
            }else if(i == 2 && cards[i][j] == 0){
                printf("C %d\n", j+1);
            }else if(i == 3 && cards[i][j] == 0){
                printf("D %d\n", j+1);
            }
        }
    }
    return 0;
}