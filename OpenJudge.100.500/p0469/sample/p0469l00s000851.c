#include <stdio.h>

int main(){

    int A, B, K;
    scanf("%d", &K);
    scanf("%d", &A);
    scanf("%d", &B);

    if((B-A)/K>=1){
        printf("OK");
    }else{
        printf("NG");
    }

    return 0;
}