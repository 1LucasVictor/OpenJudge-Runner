#include <stdio.h>
int main(void)
{
 int S,s,m,h,t;
 scanf("%d",&S);
 h=S/3600;
 t=S%3600;
 m=t/60;
 s=t%60;
 printf("%d:%d:%d\n",h,m,s);
 return 0;
}