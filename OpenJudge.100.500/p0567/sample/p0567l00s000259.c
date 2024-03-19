#include<stdio.h>
int main()
{
    int a,b,c,r;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=1&&a<=100&&b>=1&&b<=100&&c>=0&&c<=100)
    {
        r=(c-(a-b));
        if(r<0)
            printf("0\n");
        else
            printf("%d\n",r);
    }
    return 0;
}