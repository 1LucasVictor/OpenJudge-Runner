#include<stdio.h>
int main(void)
{
    int x,a,a1,b,b1,c;
    scanf("%d",&x);
    a=x/500;
    a1=a*1000;
    b=(x%500)/5;
    b1=b*5;
    c=a1+b1;
    printf("%d\n",c);
    return 0;
}
