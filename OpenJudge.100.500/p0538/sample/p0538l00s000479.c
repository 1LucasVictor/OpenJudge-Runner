#include<stdio.h>
int main()
{
int a,b,r;
scanf("%d%d",&a,&b);
if(a<=9 && b<=9)
{
    r=a*b;
    printf("%d",r);
}
else printf("-1");
return 0;
}
