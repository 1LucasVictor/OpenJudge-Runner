#include<stdio.h>

int main(void){
    
    int N,A,B,NA;

    scanf("%d %d %d",&N,&A,&B);

    NA = N * A;

    if(NA < B){
        printf("%d",NA);
    }else{
        printf("%d",B);
    }
    return 0;
}