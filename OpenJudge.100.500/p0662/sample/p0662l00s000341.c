#include<stdio.h>
int main()
{
int a,b,c,d;
while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF){
if(a>=c)
{if(a>d)
printf("%d\n",0);
if(a<=d&&b>=d)
printf("%d\n",d-a);
if(a<=d&&b<=d)
printf("%d\n",b-a);
}
if(a<=c)
{if(c>b)
printf("%d\n",0);
if(c<=b&&b>=d)
printf("%d\n",d-c);
if(c<=b&&b<=d)
printf("%d\n",b-c);
}
}
return 0;
}