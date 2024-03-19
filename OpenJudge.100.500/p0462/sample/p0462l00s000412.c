#include<stdio.h>
int main(){
    long long a;
    long double b;
    scanf("%lld%Lf",&a,&b);
    a *= b;
    printf("%lld\n",a);
    return 0;
}