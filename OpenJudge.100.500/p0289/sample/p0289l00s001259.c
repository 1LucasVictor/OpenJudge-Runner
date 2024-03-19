#include<stdio.h>

int main() {
   int x, y, n, i;

   scanf("%d%d", &x, &y);

   if (x>=y) {
      while (x>=y) {
         x=x%y;
      }
      for (i=1; i<x; i++)
         if (x%i==0 && y%i==0)
            n=i;
   } else {
      while (y>=x) {
         y=y%x;
      }
      for (i=1; i<y; i++)
         if (x%i==0 && y%i==0)
            n=i;
    }
   printf("%d\n",n);
   return 0;
   
}