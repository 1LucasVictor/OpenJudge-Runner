#include<stdio.h>

int main(void)
{
   int n,i;

   scanf("%d",&n);
   for(i=9;i>0;i--)
      if((n%i==0)&&(n/i<10)){
         printf("Yes\n");
         return 0;}
   printf("No\n");
   return 0;
}
