#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c>a-b) c=c-(a-b);
    else c=0;
    printf("%d\n",c);
    return 0;
}