#include<stdio.h>
int main(){
    long long a;
    scanf("%lld",&a);
    double b;
    scanf("%lf",&b);
    double ans = a * b;
    long long p = ans / 1;
    printf("%lld\n",p);
    return 0;
}