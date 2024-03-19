#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,k;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    int sum=0;
    if(k<=a)
    {
        sum=k;
    }
    else
    {
        sum+=a;
        k=k-a;
        if(k<=b)
        {
            sum=sum;
        }
        else
        {
            k=k-b;
            sum-=k;
        }
    }
    printf("%d",sum);
}
