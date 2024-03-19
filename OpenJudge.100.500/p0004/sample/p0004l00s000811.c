#include<stdio.h>
int main()
{
    long long int a,b,gcd,lcm,m,u,temp;
    while(scanf("%llu %llu",&a,&b)!=EOF){
        m=(a*b);{
        while(b!=0){
            temp=b;
            b=(a%b);
            a=temp;
        }
         gcd=a;
         lcm=m/gcd;
        }
        printf("%llu %llu\n",gcd,lcm);
    }
    return 0;
}