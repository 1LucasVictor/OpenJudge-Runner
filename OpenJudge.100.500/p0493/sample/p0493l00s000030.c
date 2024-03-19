#include<stdio.h>

int main(){
   int X;
   int bighappy = 1000;
   int smallhappy = 5;
   int totalhappy = 0;
   scanf("%d",&X);

   totalhappy = (X/500*1000)+(X%500/5*5);

   printf("%d",totalhappy);

   return 0;
}
   