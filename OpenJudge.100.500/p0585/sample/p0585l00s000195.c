#include<stdio.h>

int main(void){

    int A,B,T,i,result = 0;

    scanf("%d %d %d",&A,&B,&T);

    result = B * (T / A);

    printf("%d",result);
    return 0;
}