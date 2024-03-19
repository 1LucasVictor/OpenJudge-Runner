#include <stdio.h>

int main(void)
{
   int a, h, n=0;

   scanf("%d%d",&h,&a);

   n=h/a;
   if(h%a>0) n++;

   printf("%d\n",n);

   return 0;
}