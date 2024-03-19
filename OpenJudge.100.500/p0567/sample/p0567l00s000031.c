#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main (void){

    int A,B,C,D;
    scanf("%d %d %d",&A,&B,&C);

    if(A-B >= C){
        D = 0;
    }else if(A-B < C){
        D = C-(A-B);
    }

    printf("%d",D);
    return 0;
}