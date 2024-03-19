#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void){
    int i, A, B, K, k=0;
    scanf("%d %d %d", &A, &B, &K);
    if(A > B){
        i = A;
        A = B;
        B = i;
    }
    for(i=A; k!=K; i--){
        if(A%i==0 && B%i==0)k++;
    }
    printf("%d\n", i+1);
    return 0;
}
