#include<stdio.h>
int main()
{
    int a,b,c,r,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a-b;
    if(d>=c)
     printf(" 0\n");
    else
    {
      r=c-d;
    printf("%d",r);
    }

    return 0;
}
