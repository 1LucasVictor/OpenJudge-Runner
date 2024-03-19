#include<stdio.h>

int main(void){
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(B+C-A<0){
        printf("0");
    }else{
        printf("%d",B+C-A);
    }
    return 0;
}