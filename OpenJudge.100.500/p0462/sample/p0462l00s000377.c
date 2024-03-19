#include <stdio.h>
#include <math.h>
int main(void){
    long long a,c;
    double b;
    scanf("%lld%lf",&a,&b);
    c = b*100;
    printf("%lld",a*c/100);
}