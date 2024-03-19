#include <stdio.h>
int main(void)
{
   int N,i,j;

   scanf("%d",&N);
   for(i=1;i<10;i++)
      for(j=1;j<10;j++)
         if(i*j==N){
            printf("Yes\n");
            return 0;
         }
   printf("No\n");
   return 0;
}