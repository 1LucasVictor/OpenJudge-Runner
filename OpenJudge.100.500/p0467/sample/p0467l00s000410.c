#include<stdio.h>
int main()
{
    long long int a,b,c,k,sum=0,y,z;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
    if(k>=a)sum+=a*1;
    z = k-a;
    if(z>=b)sum+=b*0;
    y = k-(a+b);
    if(y<=c)sum+=y*(-1);
    printf("%lld\n",sum);
    return 0;

}
