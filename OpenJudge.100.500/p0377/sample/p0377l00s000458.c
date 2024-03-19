#include <stdio.h>
 
int main(void)
{
    int trump[4][13], No;
    int n, i, j;
    char suit;    
 
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            trump[i][j] = 0;
        }
    }
 
    scanf("%d", &n);
 
    for(i=0;i<n;i++){
        scanf("%s %d", &suit, &No);
         
        if(suit == 'S'){
            trump[0][No-1] = 1;
        }
        if(suit == 'H'){
            trump[1][No-1] = 1;
        }
        if(suit == 'C'){
            trump[2][No-1] = 1;
        }
        if(suit == 'D'){
            trump[3][No-1] = 1;
        }        
    }
 
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(trump[i][j] == 0){
                if(i == 0){
                    printf("S %d\n", j+1);
                }     
                if(i == 1){
                    printf("H %d\n", j+1);
                }     
                if(i == 2){
                    printf("C %d\n", j+1);
                }     
                if(i == 3){
                    printf("D %d\n", j+1);
                }     
            }
        }
    }   
    return 0;
}