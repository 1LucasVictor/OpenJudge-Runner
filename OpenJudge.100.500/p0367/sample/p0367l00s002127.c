#include<stdio.h>

int main(void)
{
   int a,b,c,i;
   scanf("%d %d %d",&a,&b,&c);

   i=0;

   for(;a<b;a++){
      if(c % a == 0){
         i++;
      }
   }

   printf("%d\n",i);

   return 0;
}