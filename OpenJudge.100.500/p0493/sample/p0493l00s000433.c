#include<stdio.h>

int main()
{
     long long int a,b,c,s;
    scanf("%lld",&a);
    b=a/500;
    c=(a%500)/5;
    s=(1000*b)+(5*c);
    printf("%lld",s);
    return 0;
}