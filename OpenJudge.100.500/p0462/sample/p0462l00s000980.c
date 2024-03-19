#include <stdio.h>
int main(void){
    long long a;
    long double b;
    scanf("%lld%Lf",&a,&b);
    a *=b;
    printf("%lld\n",a);
}