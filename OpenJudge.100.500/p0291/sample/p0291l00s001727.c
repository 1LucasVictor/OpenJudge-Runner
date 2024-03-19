#include <stdio.h>

int main(void){
   int n, i, j, m, x;

   scanf("%d", &n);

   int a[n];

   for(i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }

   x = a[1] - a[0];

   for(j = 1; j < n; j++) {
      for(i = 0; i < j; i++) {
         if (a[j] > x){
         m = a[j] - a[i];
         if (x < m){
            x = m;
         }
         }
      }
   }

   printf("%d\n", x);

   return 0;
}
