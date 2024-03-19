#include <stdio.h>

int main(void){
   int ani,leg,t;
   scanf("%d%d",&ani,&leg);

   t=leg%6;
   if((t==0)||(t==2)||(t==6))
      printf("Yes\n");
   else printf("No\n");
   return 0;
}