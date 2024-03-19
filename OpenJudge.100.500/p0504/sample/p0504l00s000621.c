#include <stdio.h>
int main(void)
{
   int H,A,i=0;

   scanf("%d%d",&H,&A);
   while(H>0){
      H-=A;
      i++;
   }
   printf("%d\n",i);
   return 0;
}