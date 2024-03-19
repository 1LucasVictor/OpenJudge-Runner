#include<stdio.h>
#include<math.h>
int main()
{
    long long k,a,b,s;
    scanf("%lld%lld%lld",&k,&a,&b);
    s=abs(a-b);
    if(s>=k||a%k==0||b%k==0)
        printf("OK\n");
    else
        printf("NG\n");

    return 0;
}