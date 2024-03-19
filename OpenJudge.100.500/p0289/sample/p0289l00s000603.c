#include<stdio.h>

int main(){
  int x,y,t;

  scanf("%d %d",&x,&y);

  while(1){
   if(x>=y) t=x%y;
   else t=y%x;

   if(t==0) break;
   else {x=y;
         y=t;
   }
  }
  printf("%d\n",y);
 
  return 0;
}