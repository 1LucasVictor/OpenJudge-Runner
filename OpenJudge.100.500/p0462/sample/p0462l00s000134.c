/* 169c.c */
#include <stdio.h>
#include <math.h>

int main(void){
    double b,samu=0;
    long long int a,sum=0;
    scanf("%lld %lf",&a,&b);
    samu=a*b;
    sum=floor(samu);
    printf("%lld",sum);
    return 0;
}