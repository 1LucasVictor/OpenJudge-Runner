#include <stdio.h>

int main(void){
    long long int a;
    double b;
    scanf("%lld",&a);
    scanf("%lf",&b);
    long long int ans = a*b;
    printf("%lld\n",ans);
}