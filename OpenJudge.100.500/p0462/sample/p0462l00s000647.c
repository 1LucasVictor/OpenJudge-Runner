#include<stdio.h>

int main(void){
    long long int a,d;
    double b,c;
    scanf("%lld %lf",&a,&b);
    c = a*b;
    c *= 10;
    d = (int)c;
    d = d-(d%10);
    d /= 10;
    printf("%lld\n",d);
    return 0;
}
