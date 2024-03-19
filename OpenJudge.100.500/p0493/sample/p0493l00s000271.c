#include<stdio.h>

int main(void){
    long long int x;
    long long int ureshisa500, ureshisa5;
    scanf("%lld",&x);
    ureshisa500 = (x / 500) * 1000;
    x = x % 500;
    ureshisa5 = (x / 5) * 5;
    printf("%lld\n", ureshisa500 + ureshisa5);
    return 0;
}