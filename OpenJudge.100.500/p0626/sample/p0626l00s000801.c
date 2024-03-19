#include<stdio.h>

int main(void)
{
   int a,b,c=1,i;

   scanf("%d%d",&a,&b);

   for(i=0;i<a;i++)
      c*=100;

   c*=b;
   printf("%d\n",c);
   return 0;
}
