#include<stdio.h>

int main(void)
{
    int x,n,j;

    scanf("%d",&x);
    n=x/500*1000;
    j=(x%500)/5*5;
    printf("%d\n",n+j);
    return 0;
}