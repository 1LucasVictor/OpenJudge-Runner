#include<stdio.h>

int main(void){
   int x,y,r;
   scanf("%d %d",&x,&y);

   if(x<y){
      x=y;
      y=x;
   }
   while(y>0){
      r=x%y;
      x=y;
      y=r;
   }
  printf("%d",x);

  return 0;
}
