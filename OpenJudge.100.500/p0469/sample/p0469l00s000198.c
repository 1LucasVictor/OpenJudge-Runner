#include <stdio.h>

int main(){
    int A, B, K;
    scanf("%d%d%d", &A, &B, &K);
    if(A*K>=B){
        printf("OK");
    }else{
        printf("NG");
    }
    return 0;
}