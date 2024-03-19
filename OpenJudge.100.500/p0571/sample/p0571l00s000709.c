#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    x=a*b;
    if(x<=c)
    {
        printf("%d\n",x);
    }
    else
    {
        printf("%d\n",c);
    }
    return 0;
}
