#include<stdio.h>
int main(void){

    int N,D;
    scanf("%d",&D);
    scanf("%d",&N);

    switch(D){
        case 0:if(N != 100){
                printf("%d",N);
             }else{
                printf("%d",101);
            }   break;
        
        case 1:
            if(N != 100){
                printf("%d", 100 * N);
            }else{
                printf("%d",10100);
            }   break;
        
        case 2:
           if(N != 100){
               printf("%d",10000 * N);
           }else{
               printf("%d",1010000);
           }    break;

    }   
    return 0;

    
}