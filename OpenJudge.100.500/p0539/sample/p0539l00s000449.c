#include <stdio.h>

int main(void)
{
   int n, i, f, s;

   scanf("%d",&n);

   f=0;s=0;
   for(i=1;i<10;i++){
     if((n % i == 0) && (n / i <= 9))
         f=1;
   }

   if(f==1) printf("Yes\n");
   else     printf("No\n");

   return 0;
}
