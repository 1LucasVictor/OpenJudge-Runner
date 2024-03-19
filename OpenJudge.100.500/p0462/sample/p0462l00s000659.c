#include <stdio.h>

int main(){
    double a;
    double b;

    scanf("%lf %lf",&a,&b);

    unsigned long long x;
    x = a*b;
    printf("%llu\n",x);
    
    return 0 ;
}