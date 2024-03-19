#include <stdio.h>

int main(void){
   int x, y, n, i, j, k;

   do {
      scanf("%d %d", &n, &x);
   } while(n == 0||x == 0);

   y = 0;

   for(i = 1; i <= n; i++) {
      for(j = i + 1; j <= n; j++) {
         for(k = j + 1; k <= n; k++) {
            if (i + j + k == x){
               y++;
            }
         }
      }
   }

   printf("%d\n", y);

   return 0;
}


