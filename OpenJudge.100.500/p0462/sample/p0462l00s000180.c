#include <stdio.h>
#include <math.h>
int main(void){
    long long a;
    double b;
    scanf("%lld%lf",&a,&b);
    printf("%lld",(long long)floor(a*b));
}