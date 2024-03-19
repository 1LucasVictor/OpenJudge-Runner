#include<stdio.h>

int main(){
   int x,x1,x2,x3,glad;
   scanf("%d",&x);
   x1=x/500;
   x2=x%500;
   x3=x2/5;
   glad=x1*1000+x3*5;
   printf("%d",glad);
   return 0;
}