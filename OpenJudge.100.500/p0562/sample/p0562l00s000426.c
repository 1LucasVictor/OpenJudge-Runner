#include<stdio.h>

int main(void)
{
   int a, b, x;

   scanf("%d%d",&a,&b);

   if(b!=1){
      x=(b-1)/(a-1);
      if((b-1)%(a-1)==0)
         printf("%d\n",x);
      else
         printf("%d\n",x+1);
   }
   else
      printf("0\n");
   return 0;
}