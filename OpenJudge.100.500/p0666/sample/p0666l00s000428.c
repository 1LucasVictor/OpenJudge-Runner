#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void){

    long long X, A, B;

    scanf("%lld%lld%lld", &X, &A, &B);

    if(B - A <= 0){
        printf("delicious\n");
    }else if(B - A <= X){
        printf("safe\n");
    }else{
        printf("dangerous\n");
    }

    return 0;
}