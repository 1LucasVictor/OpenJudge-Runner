#include<stdio.h>
int main(void){
   int W,H,x,y,r;
   scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

   if((r<=x) && (r<=y)){
   if((W>=(r+x)) && (H>=(r+y))){
      printf("Yes\n");
      return 0;
   }
   }
   
   printf("No\n");
   return 0;
}
