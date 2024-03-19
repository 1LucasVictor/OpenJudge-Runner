#include <stdio.h>

int main(void){
    long long int a;
    double b;
    scanf("%lld",&a);
    scanf("%lf",&b);
    b*=100;
    long long int ans = a*b/100;
    printf("%lld\n",ans);
}