#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    x=a-b;
    if(c<x)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n",c-x);
    }

}
