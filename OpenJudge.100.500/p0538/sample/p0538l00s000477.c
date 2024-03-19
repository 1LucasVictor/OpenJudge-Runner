#include <stdio.h>

int main(void){
    int A, B;
    scanf("%d %d", &A, &B);

    if(A >= 10 || B>= 10){
        printf("%d", -1);
    }else{
        printf("%d", A*B);
    }

    return 0;

}