#include<stdio.h>

int main(void){
   int p;
   scanf("%d",&p);
   if(p%10==2||p%10==4||p%10==5||p%10==7||p%10==9){
      printf("hon");
   }else if(p%10==0||p%10==1||p%10==6||p%10==8){
      printf("pon");
   }else if(p%10==3){
      printf("bon");
   }

   return 0;
}
