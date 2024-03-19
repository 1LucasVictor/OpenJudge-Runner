#include <stdio.h>
#include <math.h>
int main(void){
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c = a*b*100/100;
    printf("%lld",(long long)c);
}
