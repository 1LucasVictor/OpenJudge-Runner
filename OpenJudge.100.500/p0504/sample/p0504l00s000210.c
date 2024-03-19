#include <stdio.h>
int main (void)
{
   int a,h,i,b;
   scanf("%d%d",&h,&a);
   b=h/a;
   i=h%a;
   if(i>0) b=b+1;
   else b=b+0;
   printf("%d\n",b);
}

