#include<stdio.h>

int main(void){

    // int a;
    double a,b;
    // scanf("%.2f",&a,&b);
    // printf("%.2f %.2f",a,b);
    scanf("%lf%lf",&a,&b);
    // scanf("%f",&b);
    // printf("%.2lf %.2lf\n",a,b);

    double tmp=a*b;
    long long int ans=tmp;
    printf("%lld\n",ans);

    return 0;
}