#include <stdio.h>

int main(void)
{
   int d,n,p;

   scanf("%d%d",&d,&n);

   switch(d){
      case 0:
         p=1;
         break;
      case 1:
         p=100;
         break;
      case 2:
         p=10000;
         break;
   }

   p*=n;

   printf("%d",p);

   return 0;
}
