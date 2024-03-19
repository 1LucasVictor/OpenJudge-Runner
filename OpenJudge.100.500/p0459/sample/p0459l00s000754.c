#include<stdio.h>
int main(){
  int a,b,X,Y;
  
  scanf("%d",&X);
  scanf("%d",&Y);
  
  
 for(a=0;a <= X <= 50;a++){
  b = X-a;
   if(Y == 4*a + 2*b){
     printf("Yes");
     break;
   }else if(a==100 || a==X) {
     printf("No");
   }  
 }
   
   return 0;
 }
  
