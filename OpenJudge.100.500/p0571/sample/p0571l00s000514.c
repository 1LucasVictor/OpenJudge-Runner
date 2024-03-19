#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    int a=n*x;
    if(a>y)
        printf("%d",y);
    else
        printf("%d",a);
    return 0;
}