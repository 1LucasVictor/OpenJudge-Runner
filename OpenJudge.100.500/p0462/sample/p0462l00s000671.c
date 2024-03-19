#include<stdio.h>
int main(void){
    long long int a;
    double b;
    scanf("%lld %lf",&a,&b);
    double c;
    c = a * b;
    long long int ans = c;
    printf("%lld",ans);
    return 0;
}
