#include <stdio.h>

int main(void){
   int i,j,n,r=0;

   scanf("%d",&n);

   for(i=1;i<10;i++){                                                           
      for(j=1;j<10;j++)
         if(i*j==n) r=1;
   }

   if(r==1) printf("Yes\n");
   else printf("No\n");
   return 0;
}
