#include<stdio.h>
#include<limits.h>

int main(void){
    long long int a;
    double b;
    long long int s;

    scanf("%lld",&a);
    scanf("%lf",&b);

    s = a * b;

    printf("%lld",s);
    
    return 0;
}