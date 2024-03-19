#include <stdio.h>

int main(void) {
   
   int X;
   
   scanf("%d", &X);
   
   int ans = 0;
   
   while (X >= 500) {
      X = X - 500;
      ans = ans + 1000;
   }
   
   while (X >= 5) {
      X = X - 5;
      ans = ans + 5;
   }
   
   printf("%d\n", ans);
   
   return 0;
}

