#include <stdio.h>
int main (void)
{
   int x,c,r,i;
   scanf("%d",&x);
   c = x/500;
   r = x%500;
   i = r/5;
   printf("%d\n",c*1000+i*5);
   return 0;
}