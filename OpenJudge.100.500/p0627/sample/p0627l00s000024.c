#include<stdio.h>
int main()
{
    int a,b,sum,subs,mul;
    scanf("%d %d",&a,&b);
    sum=a+b;
    subs=a-b;
    mul=a*b;
    if(sum>subs&&sum>mul)
    {
        printf("%d",sum);
    }
    else if(subs>sum&&subs>mul)
    {
        printf("%d",subs);
    }
    else if(sum==subs&&sum==mul)
    {
        printf("%d",mul);
    }

    else
    {
        printf("%d",mul);
    }
    return 0;
}
