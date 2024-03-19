#include<stdio.h>

int main(void) {
   int x,i;
   int happy = 0;
   scanf("%d",&x);

   while(x > 0) {
      if(x%500 == 0) {
         happy += 1000;
         x -= 500;
      } else if(x%5 == 0) {
         happy += 5;
         x -= 5;
      } else if(x%100 == 0) {
         x -= 100;
      } else if(x%50 == 0) {
         x -= 50;
      } else if(x%10 == 0) {
         x -= 10;
      } else if(x%1 == 0) {
         x -= 1;
      }
   }
   printf("%d\n",happy);

   return 0;
}
