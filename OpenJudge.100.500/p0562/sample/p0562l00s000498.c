#include <stdio.h>

int main(void){
    int A, B;

    scanf("%d%d", &A, &B);

    if(B == 1){
        printf("0\n");
    }else if(A >= B){
        printf("1\n");
    }else{
        B -= A;

        printf("%d\n", (B + A - 2) / (A - 1) + 1);
    }
}