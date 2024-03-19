#include<stdio.h>
int main()
{
    int a,b,c,m;
    scanf("%d %d %d",&a,&b,&c);
    m=a*b;
    if(c>m)
    {
        printf("%d",m);
    }
    else
    {
        printf("%d\n",c);
    }
    return 0;

}
