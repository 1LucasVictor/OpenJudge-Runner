#include<stdio.h>

int main() {
   int X, Y;

   scanf("%d %d", &X, &Y);

   if(X * 4 >= Y) {
      if(Y % 6 == 0 || Y % 6 == 2 || Y % 6 == 4) {
         printf("Yes\n");
      }else {
         printf("No\n");
      }
   }else {
      printf("No\n");
   }
   return 0;
}
