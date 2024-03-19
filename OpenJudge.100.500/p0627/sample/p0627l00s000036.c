#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void){

    int A, B;

    scanf("%d%d", &A, &B);

    int max = A + B;

    if(max < A - B){
        max = A - B;
    }

    if(max < A * B){
        max = A * B;
    }

    printf("%d\n", max);

    return 0;
}