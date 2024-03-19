#include<stdio.h>

int  main()
{
    int a,b,c,d,e=0;

    scanf("%d%d%d",&a,&b,&c);
    d=b-(a-c);

    if(d<=0)
    {
        printf("%d\n",e);
    }
    else
        printf("%d\n",d);

    return  0;
}