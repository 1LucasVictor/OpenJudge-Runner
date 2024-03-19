#include<stdio.h>
int main()
{
    int a,b,c,s;
    scanf("%d %d %d",&a,&b,&c);
    if((a-b)<c)
        {s=c-(a-b);
    printf("%d\n",s);}
    else
        {printf("0\n");}
    return 0;
}