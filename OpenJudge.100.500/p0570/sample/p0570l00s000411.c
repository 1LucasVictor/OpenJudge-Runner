#include<stdio.h>
#include<stdlib.h>
int main (void){
    int A;
    int B;
    int K;
    scanf("%d %d",&A,&B);


    if(abs(A-B)%2 == 0  ){
       K =(A+B)/2;
        printf("%d",K);
         
    }else{
        printf("IMPOSSIBLE\n");
    }
return 0;

}
