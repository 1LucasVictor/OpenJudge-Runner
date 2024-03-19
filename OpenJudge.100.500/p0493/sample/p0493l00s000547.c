#include<stdio.h>

int main(void)
{
   int a,b,c,x;

   scanf("%d",&x);
   a=x/500;
   b=x%500;
   c=b/5;
   printf("%d\n",a*1000+c*5);
   return 0;
}
