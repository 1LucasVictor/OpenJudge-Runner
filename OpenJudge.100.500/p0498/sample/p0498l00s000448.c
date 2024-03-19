#include <stdio.h>

int main(void){
    int n;
    int total;
    
    scanf( "%d",&n );

    total = n / 2;
    total += n % 2;

    printf( "%d",total );

    return 0;
}