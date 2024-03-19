#include<stdio.h>

int main(void){

    long long int a;
    double b;
    // scanf("%.2f",&a,&b);
    // printf("%.2f %.2f",a,b);
    scanf("%lld%lf",&a,&b);
    // scanf("%f",&b);
    // printf("%lld %.2Lf\n",a,b);

    long double tmp=a*b;
    long long int ans=tmp;
    printf("%lld\n",ans);

    return 0;
}