#include<stdio.h>
int main()
{
    int n,x=0,a=0;
    scanf("%d",&n);
    while(n/10!=0)
    {
        if(x==n%10)
        {
            a=1;
            break;
        }
        else
        {
            x=n%10;
            n=n/10;
        }
    }
    if(x==n%10)
    {
        a=1;
    }
    if(a==0)
        printf("Good");
    else
        printf("Bad");
    return 0;
}