#include<stdio.h>
int main()
{
    long long int h,a;
    long long int sum=0;
    scanf("%lld%lld",&h,&a);
    long long int s;
    for(int i=0;i<a;i++)
    {
        scanf("%lld",&s);
        sum=sum+s;
    }
    if(sum-h>=0)
        printf("Yes");
    else
        printf("%No");
    return 0;
}
