#include <stdio.h>
int main (void)
{
   int n,i,j;
   scanf("%d",&n);

   for(i=1;i<=9;i++)
           for(j=1;j<=9;j++){
      if(i*j==n){
            printf("Yes\n");
            return 0;
      }
           }

             puts("No");
}
