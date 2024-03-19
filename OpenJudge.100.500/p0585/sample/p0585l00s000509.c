#include<stdio.h>

int main(void)
{
    int a,b,t,x=0,n;
    scanf("%d %d %d",&a,&b,&t);
    if(t>=a)
    {
        for(n=1;n<=t;n++)
        {
            if(t>=a*n)
            {
                x+=b;
            }
        }
    }
    else
    {
        x=0;
    }
    printf("%d",x);
    return 0;
}