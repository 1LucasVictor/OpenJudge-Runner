#include<stdio.h>
int main()
{
    int n,x,a=0,size;
    scanf("%d",&n);
    x=n%10;
    n=n/10;
    size=2;
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
        size++;
    }
    if(size==2)
        printf("Bad");
    else
    {
        if(x==n)
        {
            a=1;
        }
        if(a==0)
            printf("Good");
        else
            printf("Bad");
    }
    return 0;
}