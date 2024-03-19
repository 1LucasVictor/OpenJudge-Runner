#include <stdio.h>
int main(void){
    int K,A,B;
    scanf("%d %d %d",&K,&A,&B);
    if(B/K-A/K >= 1 || B%K == 0 || A%K == 0){
        printf("OK");
    }else{
        printf("NG");
    }
}