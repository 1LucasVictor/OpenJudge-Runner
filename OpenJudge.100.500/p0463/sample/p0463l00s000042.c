#include<stdio.h>

int main(void){
   int N;
   int x = 0;

   while(x != 1){
   scanf("%d",&N);
   if( N < 0 || 1000 < N){
      continue;
   } else {
      if( N < 10){
         if( N == 0 || N == 1 || N == 6 || N == 8){
            printf("pon");
         } else if( N == 3){
            printf("bon");
         }
         else{
            printf("hon");
         }
      }
      if( N < 100){
         if( N % 10 == 0 ||N % 10 == 1 || N % 10 == 6 || N % 10 == 8){
            printf("pon");
         } else if(N % 10 == 3){
            printf("bon");
         } else {
            printf("hon");
      }
      }else{
         if( N / 10 % 10 == 0 ||N/10 % 10 == 1 || N / 10 % 10 == 6 || N / 10 % 10 == 8){
            printf("pon");
         } else if(N / 10 % 10 == 3){
            printf("bon");
         }
         else{
            printf("hon");
         }
      }
      x++;
   }
   }
   printf("\n");
   return 0;
}