#include<stdio.h>
main()
{
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    x=(c-(a-b));
    if(x<0)
        printf("0\n");
    else
        printf("%d\n",x);
}
