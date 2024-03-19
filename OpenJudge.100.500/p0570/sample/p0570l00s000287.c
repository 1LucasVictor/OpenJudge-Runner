#include<stdio.h>

int main(void)
{
    int a,b,k,d;

    scanf("%d%d",&a,&b);
    d=abs(a+b);
    k=(d)/2;



    if((d)%2==0)
    {
        printf("%d",k);
    }
    else
        printf("IMPOSSIBLE");

    return 0;
}