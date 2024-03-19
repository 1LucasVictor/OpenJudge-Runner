#include<stdio.h>
main()
{
    int x,b,c;
    scanf("%d %d %d",&x,&b,&c);
    if((x*b)>c)
        printf("%d\n",c);
    else
        printf("%d\n",x*b);
}
