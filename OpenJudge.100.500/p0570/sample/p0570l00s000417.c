#include <stdio.h>
#include <stdlib.h>
int main(void){
    unsigned long long int a,b;
    scanf("%llu %llu", &a, &b);
    if((b+a) % 2){
        puts("IMPOSSIBLE");
    }else{
        printf("%llu\n", (b + a)/2);
    }
    
    return 0;
}