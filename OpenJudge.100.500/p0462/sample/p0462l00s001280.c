#include <stdio.h>

int main(){
    long long a;
    double b;

    scanf("%lld %lf",&a,&b);

    long long x;
    x = a*b;
    printf("%llu\n",x);
    
    return 0 ;
}