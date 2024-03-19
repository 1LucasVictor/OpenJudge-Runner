#include<stdio.h>

int main(){
   int X,Y;

   scanf("%d %d",&X,&Y);
   
   if(Y<2*X||X*4<Y){
      printf("No");
   }else if(Y%2==1){
      printf("No");
   }else{
      printf("Yes");
   }
   return 0;
}
