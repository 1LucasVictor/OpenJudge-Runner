#include <stdio.h>

int main(void)
{
   int i, j, n;

   scanf("%d",&n);

   for(i=1;i<=9;i++) {
      for(j=1;j<=9;j++) {
         if(n==i*j) {
            printf("Yes\n");
            return 0;
         }
      }
   }

   printf("No\n");
   return 0;
}