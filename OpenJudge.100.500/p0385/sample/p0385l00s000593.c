#include<stdio.h>
int main(void){
   int x;
   int sum;
   int i;
   int b;

   b=10;
   sum=0;
   scanf("%d",&x);
   while(x!=0){
      for(i=0;x>=1;i++){
         sum += (x%b);
         x /= b;
      }
      printf("%d\n",sum);
      sum=0;
      scanf("%d",&x);
   }
   return 0;
}