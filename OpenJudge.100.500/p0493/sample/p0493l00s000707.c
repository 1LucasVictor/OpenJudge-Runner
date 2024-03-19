#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int a,b,c;
    a=X/500;
    b=X%500;
    c=b/5;
    printf("%d\n",(a*1000+c*5));
    return 0;
}

