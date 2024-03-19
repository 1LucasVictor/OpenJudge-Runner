#include <stdio.h>
int main(void){
   int W,H,x,y,r,a,b,c,d;
   scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
   a=x-r;
   b=y-r;
   c=x+r;
   d=y+r;
   if(a<0){
       puts("No");
   }
   else if(b<0){
       puts("No");
   }
   else if(c>W){
       puts("No");
   }
   else if(d>H){
       puts("No");
   }
   else {
       puts("Yes");
   }
 
   return 0;
   }
