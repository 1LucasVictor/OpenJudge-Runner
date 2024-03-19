#include<stdio.h>
#include<stdlib.h>

int main(void){
    long X, A, B;
    scanf("%ld%ld%ld", &X, &A, &B);
    if(A >= B){
        printf("delicious\n");
        return 0;
    }
    if(X >= B - A) {
        printf("safe\n");
        return 0;
    }
    else{
        printf("dangerous\n");
        return 0;
    }

    return 0;
}
