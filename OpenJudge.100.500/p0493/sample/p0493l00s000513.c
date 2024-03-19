#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d",&x);
    a=(x/500)*1000;
    x=x%500;
    b=(x/5)*5;
    printf("%d\n",a+b);
    return 0;
}