#include<stdio.h>

int main(void)
{
   int a,b,c,s,n;

   s=0; n=0;
   scanf("%d%d%d",&a,&b,&c);

   s=c/a;
   n=s*b;

   printf("%d\n",n);

   return 0;
}
