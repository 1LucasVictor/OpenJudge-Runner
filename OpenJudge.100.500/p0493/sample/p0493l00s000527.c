#include<stdio.h>
int main()
{
    int x,q,rem,r,sum=0;
    scanf("%d",&x);
    if(x>=5&&x<500)
    {
        r=x/5;
        sum=sum+(r*5);
    }
    else if(x>=500)
    {
        rem=x%500;
        q=x/500;
        if(rem>=5)
        {
            r=rem/5;
        }
        sum=sum+(q*1000)+(r*5);
    }
    printf("%d",sum);
}