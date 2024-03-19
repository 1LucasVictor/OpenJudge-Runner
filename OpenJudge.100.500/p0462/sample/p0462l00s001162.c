#include <stdio.h>

int main(void){
    long long int a;
    double b;
    scanf("%lld %lf",&a,&b);
    long double ans = (double)a*(b);
    long long int ans2 = (long long int)ans;
    printf("%lld\n",ans2);

    return 0;
}