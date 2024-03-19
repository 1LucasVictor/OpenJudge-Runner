#include<stdio.h>
#define NUM 999
int main(){
   int x ;
   scanf("%d",&x);
   if(x%10==2||x%10==4||x%10==5||x%10==7||x%10==9){
      printf("hon");
   }else if(x%10==0||x%10==1||x%10==6||x%10==8){
      printf("pon");
   }else if(x%10==3){
      printf("bon");
   }
     

   
   return 0;
}
