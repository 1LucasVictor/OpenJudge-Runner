#include<stdio.h>

int main(void)
{

   int H,A,a,i;
   a=0;
   scanf("%d%d", &H, &A);
   for (i=0; H>0;i++){
      H=H-A;
      a++;
   }
   printf("%d\n",a);
   return 0;
}
