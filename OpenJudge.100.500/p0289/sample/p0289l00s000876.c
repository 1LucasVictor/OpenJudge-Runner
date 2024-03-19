#include <stdio.h>

int main(){
  int x,y,k;
  
  scanf("%d",&x);
  scanf("%d",&y);
   
   if(x>=y){
     while(x%y != 0){
       k=y;
       y=x%y;
       x=k;
     }
   }
   printf("%d\n",y);
   return 0;
}