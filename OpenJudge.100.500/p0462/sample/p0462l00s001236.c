#include <stdio.h>
int main () {
    long long a;
    float b;
    scanf("%lld%f",&a,&b);
    // printf("%lf %lf\n",a, b);
    int c = (int)(b*100);
    // printf("%lf %lf %lf\n",a, b, ans);
    printf("%lld",a*c/100);
}