#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Your code here!
    long int n, k, min;
    scanf("%ld %ld",&n,&k);
    min = n;
    
    while(1){
        n = labs(n-k);
        if(n >= min) break;
        min = n;
    }
    
    printf("%ld",min);
}