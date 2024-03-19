#include <stdio.h>


int main(){
    long long c, a;
    double b;

    scanf("%lld %lf", &a, &b);

    c = (long long)(a * b);
    printf("%lld\n", c);
    return 0;



}