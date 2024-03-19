#include<stdio.h>

int main(void)
{
   int n,a[1000],i;
   scanf("%d",&n);
   for(i=0; i<n; i++){
      scanf("%d",&a[i]);
      if((((a[i]%2)==0) && ((a[i]%3) != 0)) && ((a[i]%5)!=0)){
         printf("DENIED\n");
         return 0;
      }
   }
   printf("APPROVED\n");
   return 0;
}
