#include<stdio.h>

int main(void)
{
   int n, i, a=0;

   scanf("%d",&n);

   for(i=1;i<10;i++)
      if((n%i==0)&&(n/i<=9)){
         a=1;
   }
   if(a==1)
      printf("Yes\n");
   else
      printf("No\n");
   return 0;
}