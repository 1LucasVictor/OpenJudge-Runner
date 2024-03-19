#include <stdio.h>

int main(void){
   int x, y, n, i, j, k;

   do {
      scanf("%d %d", &n, &x);


      if (n == 0&&x == 0){
         break;
      }

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

   } while(n != 0&&x != 0);

   return 0;
}


