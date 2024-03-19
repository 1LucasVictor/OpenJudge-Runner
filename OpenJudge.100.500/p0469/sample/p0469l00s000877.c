#include<stdio.h>
int main(void){
   int A,B,K,i;
    scanf("%d",&K);
    scanf("%d %d",&A,&B);

     for(i=A;i<B;i++){
        if (i%K==0){
           printf("OK\n");
           return 0;
        }
     }
     
        printf("NG\n");
    
     return 0;
}
     