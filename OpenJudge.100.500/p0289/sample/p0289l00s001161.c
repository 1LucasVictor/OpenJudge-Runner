#include<stdio.h>

int main() {

   int x, y, z, d, f;
   int w = 1;
   int e = 0;

   scanf("%d %d", &x, &y);

   if(x < y) {
      z = x;
      x = y;
      y = z;
   }

   while(x % 10 == 0 && y % 10 == 0) {
      x /= 10;
      y /= 10;
      e++;
   }
      

   while(y > 0) {
	  w = x % y;
	  x = y;
	  y = w;
   }

   for(f = e; f > 0; f--) {
      x *= 10;
   }

   printf("%d\n", x);
   return 0;
}

