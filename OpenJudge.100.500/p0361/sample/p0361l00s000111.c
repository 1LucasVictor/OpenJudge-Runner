#include<stdio.h>

int main()
{
 int T;
 int h,m,s;
 int temp1;
 scanf("%d",&T);
 h=T/3600;
 temp1=T%3600;
 m=temp1/60;
 s=temp1%60;

 printf("%d:%d:%d\n",h,m,s);

 return 0;
}