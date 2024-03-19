#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    int i,j,k;
    unsigned long A,B;
    long K;
    
    scanf("%ld %ld",&A,&B);
    
    K = (A + B) / 2;
    
    if((A+B) % 2 == 0){
        printf("%ld\n",K);
    }else{
        printf("IMPOSSIBLE\n");
    }
    
    return 0;
}

