#include<stdio.h>

int main(){
   int crane=2;
   int turtle=4;
   int X,Y;
   scanf("%d %d",&X,&Y);
   if(Y<2*X||X*4<Y){
      printf("NO");
   }else if(Y%2==1){
      printf("NO");
   }else{
      printf("Yes");
   }
   return 0;
}