#include <stdio.h>

int main(void){
    long long int a;
    double b;
    scanf("%lld %lf",&a,&b);
    long long int ans = a*(b*100);
    printf("%lld",ans/100);

    return 0;
}