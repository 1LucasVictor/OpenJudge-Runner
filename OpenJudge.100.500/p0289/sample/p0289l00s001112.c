#include <stdio.h>

main(){
   int x, y, c;

   scanf("%d %d", &x, &y);


   do {
   if (x < y){
      c = x;
      x = y;
      y = c;
   }

   if (x % y == 0){
      break;
   }

      x = x % y;

   } while(x % y != 0);

   printf("%d\n", y);

   return 0;
}
