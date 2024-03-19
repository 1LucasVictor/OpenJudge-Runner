#include<stdio.h>

int main(void){
    int K, A, B;

    scanf("%d", &K);
    scanf("%d", &A);
    scanf("%d", &B);

    int result = (B / K) * K;

    if(A <= result){
        printf("OK");
    }else{
        printf("NG");
    }

    return 0;
}