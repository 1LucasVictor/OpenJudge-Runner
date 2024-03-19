#include<stdio.h>

int main(void){

    long long int a;
    long double b;
    // scanf("%.2f",&a,&b);
    // printf("%.2f %.2f",a,b);
    scanf("%lld %Lf",&a,&b);
    // scanf("%f",&b);
    // printf("%lld %Lf\n",a,b);

    long double tmp=0;
    tmp=a*b;
    long long int ans=0;
    ans=tmp;
    printf("%lld\n",ans); 

    return 0;
}