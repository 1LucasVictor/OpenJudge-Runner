#include <stdio.h>

int main(){
    long long int x;long long int happy=0;
    int a,b;
    scanf("%lld",&x);
    a=x/500;
    b=(x%500)/5;
    happy=1000*a+5*b;
    printf("%lld",happy);
}