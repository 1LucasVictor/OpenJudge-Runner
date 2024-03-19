#include<stdio.h>
int main(void){
    int A;
    int B;
    int C;
    int D;
    int E = 0;
    scanf("%d %d %d",&A,&B,&C);
    D = A-B;
    if(D <= C){
        printf("%d\n",C-D);
    }else{
        printf("%d",E);
    }
    return 0;
} 
