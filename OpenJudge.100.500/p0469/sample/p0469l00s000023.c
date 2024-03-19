#include<stdio.h>
#include<stdbool.h>

int main(void){
   int a,b;
   int k;
   bool j=false;
   
   scanf("%d",&k);
   scanf("%d %d",&a,&b);

   for(int i=a;i<=b;i++){
      if(i%k==0){
         j=true;
         break;
      }
   }

   if(j){
      printf("OK");
   }else if(!j){
      printf("NO");
   }

   return 0;
}
    