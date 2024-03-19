#include<stdio.h>

int main(void) {

   int x, y, z, c, d;

   scanf("%d", &x);
   scanf("%d", &y);

   if (x < y) {
      z = x;
      x = y;
      y = z;
   }

   for (d = y; d >= 2; d--) {
     if (y % d == 0 && (x % y) % d == 0) {
       c = d;
     }
   }

   printf ("%d\n", c);

   return 0;
}

