#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a*b)>c)
        printf("%d\n",c);
    else
        printf("%d\n",a*b);
}
