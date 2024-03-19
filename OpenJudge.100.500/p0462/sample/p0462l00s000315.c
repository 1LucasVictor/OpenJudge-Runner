#include<stdio.h>
int main()
{
    long long int a,pro1;
    double b,pro=1.0;
    scanf("%lld %lf",&a,&b);
    b=b*100;
    //pro=(a*b);
    pro1=(long long int)((a*b)/100);
    printf("%lld",pro1);
    return 0;
}