#include <stdio.h>

int main(void)
{
   int a, h, n=0;

   scanf("%d%d",&h,&a);

   while(h>=0){
      h=h-a;
      n++;
   }

   printf("%d\n",n);

   return 0;
}