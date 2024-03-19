#include <stdio.h>

int main(void)
{
   int d,n,p,i;
   scanf("%d%d",&d,&n);

   p = n;
   for(i=0;i<d;i++){
      p *= 100;
   }

   printf("%d",p);

   return 0;
}
