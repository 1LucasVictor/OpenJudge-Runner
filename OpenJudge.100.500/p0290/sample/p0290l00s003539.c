#include<stdio.h>

int main() {

   int num, d, i, j;
   int c = 1;
   int x[10000], y[10000];

   scanf("%d", &num);

   for ( i = 1; i <= num; i++ ) {
     scanf("%d", &x[i]);
      for ( d = 1; d <= x[i]; d++ ) {
         if ( x[i] % 2 != 0 && x[i] % d == 0 ) {
            y[i]++;
         }
      }
      if ( y[i] == 2 ) {
         c++;
      }
   }

   printf("%d\n", c);

   return 0;
}

