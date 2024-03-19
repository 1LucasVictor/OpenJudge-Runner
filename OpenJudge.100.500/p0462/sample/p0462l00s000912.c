#include <stdio.h>
int main () {
    double a, b;
    scanf("%lf%lf",&a,&b);
    // printf("%lf %lf\n",a, b);
    double ans = a*b;
    // printf("%lf %lf %lf\n",a, b, ans);
    printf("%lld",(long long int)ans);
}