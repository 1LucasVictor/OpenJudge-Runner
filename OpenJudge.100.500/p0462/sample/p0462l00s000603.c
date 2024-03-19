#include<stdio.h>
int main()
{
    long long int a,pro1;
    float b,pro=1.0;
    scanf("%lld %f",&a,&b);
    pro=((a*(b*100))/100);
    pro1=(long long int)pro;
    printf("%lld",pro1);
    return 0;
}
