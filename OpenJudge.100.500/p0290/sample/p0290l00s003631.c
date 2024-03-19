#include<stdio.h>
#include<math.h>
int main(void){
   int n, count = 0, i, s, key;
   long a;
   scanf("%d", &n);
   for ( i = 0;  i < n; i++ ) {
      s = key = 2;
      scanf("%ld", &a);
      while ( count < a && key != 0) {
         if ( a == 1) break;
         else if (a == 2) break;
         else if ( a % s == 0 ) key = 0;
         else key = 1;
         s++;
      }
      if (a == 2) {/*printf("sosuu\n");*/count++;}
      else if ( a != 1 && s > a ) {/*printf("sosuu\n");*/count++;}
   }
   printf("%d\n", count);
   return 0;
}