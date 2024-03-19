#include <stdio.h>
int main(void){
    int num,i,j,n;
    int card[5][15];
    char mark,d;
    scanf("%d",&num);
      
    for(i=0;i<num;i++){
        scanf("%c", &d);
        scanf("%c %d",&mark,&n);
          
        if(mark=='S'){
            card[0][n]=1;
            }       
          
        if(mark=='H'){
            card[1][n]=1;
            }       
          
        if(mark=='C'){
            card[2][n]=1;
            }       
          
        if(mark=='D'){
            card[3][n]=1;
            }       
          
          
          
          
     
       
          
    }
      
        for(j=1;j<=13;j++){
                if(card[0][j]!=1){
                     printf("S %d\n",j);
                }
        }
        for(j=1;j<=13;j++){
                if(card[1][j]!=1){
                     printf("H %d\n",j);
                }
        }
        for(j=1;j<=13;j++){
                if(card[2][j]!=1){
                     printf("C %d\n",j);
                }
        }
        for(j=1;j<=13;j++){
                if(card[3][j]!=1){
                     printf("D %d\n",j);
                }
        }
          
          
     
      
}
