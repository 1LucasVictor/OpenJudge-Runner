#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    scanf("%d",&x);
    a=x/500;
    b=x%500/5;
    printf("%d",a*1000+b*5);
    return 0;
}
