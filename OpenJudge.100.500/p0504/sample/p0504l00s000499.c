#include<stdio.h>

int main(void)
{
   int H,A,b;

   scanf("%d%d",&H,&A);
   b=H/A;
   if(H%A!=0)b++;
   printf("%d",b);
   return 0;
}
