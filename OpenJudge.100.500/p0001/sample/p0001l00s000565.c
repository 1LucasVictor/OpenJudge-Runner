#include <stdio.h>

int computeDigit(n){
   int i = 0;

   while(n != 0){
      n /= 10;
      i++;
   }
   return i;
}

int main(void){
   int a, b;

   while(scanf("%d %d", &a, &b) != EOF){
      printf("%d\n", computeDigit(a + b));
   }
   return 0;
}