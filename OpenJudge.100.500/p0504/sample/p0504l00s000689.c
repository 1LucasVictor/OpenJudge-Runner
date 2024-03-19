#include<stdio.h>

int main(void)
{
   int h, a, x=0;

   scanf("%d%d",&h,&a);

   while(h>0){
      h=h-a;
      x++;
   }

   printf("%d\n",x);
   return 0;
}