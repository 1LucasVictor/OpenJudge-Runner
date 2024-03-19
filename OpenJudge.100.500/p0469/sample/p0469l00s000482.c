#include<stdio.h>
#include<stdbool.h>


int main(void){
   int a,b;
   int k;
   bool j=false;
   scanf("%d",&k);
   scanf("%d %d",&a,&b);

   for(int i=1;i*k<=1000;i++){
      if(k*i>=a&&k*i<=b){
         j=true;
         break;
      }
   }

   if(j){
      printf("OK");
   }else{
      printf("NO");
   }

   return 0;
}
      
