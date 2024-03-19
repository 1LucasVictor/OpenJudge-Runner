#include<stdio.h>

int main(void){
    int K,A,B;
    scanf("%d",&K);
    scanf("%d%d",&A,&B);
    if(A/K != B/K){
        printf("OK");
    }else{
        printf("NG");
    }
}