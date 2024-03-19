#include<stdio.h>
int main()
{
 int a,h,m,s,x,y;
 scanf("%d",&a);
 h=a/3600;
 x=a%3600;
 m=x/60;
 y=x%60;
 s=y;
 printf("%d:%d:%d\n",h,m,s);
 return 0;
}