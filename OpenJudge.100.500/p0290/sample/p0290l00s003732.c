#include<stdio.h>

int main() {

   int n, d, i, j;
   int c = 0;
   int x[10000], y[10000];

   scanf("%d", &n);

   for (i = 0; i <= n - 1; i++) {
      scanf("%d", &x[i]);
      for(d = 2; d <= x[i] - 1; d++) {
         if (x[i] != 2 && x[i] % d == 0) {
            c--;
            break;
         }
      }
      c++;
   }

   printf ("%d\n", c);

   return 0;
}

