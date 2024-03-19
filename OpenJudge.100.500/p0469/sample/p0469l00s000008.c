#include<stdio.h>

int main(void){
    int K,A,B;
    scanf("%d %d %d",&K,&A,&B);
    if(A%K==0 || B/K-A/K>0){
        printf("OK\n");
    }else{
        printf("NG\n");
    }
    return 0;
}