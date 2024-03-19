#include<stdio.h>
int main(void){
    int A;
    int B;
    int C;
    int D;
    scanf("%d %d %d",&A,&B,&C);
    D = A-B;
    if(D <= C){
        printf("%d\n",C-D);
    }else{
        printf("0");
    }
    return 0;
} 

