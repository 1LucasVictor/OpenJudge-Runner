#include <stdio.h>

int main(void)
{
   int n, S[1000000], q, T[1000000], i, j;
   int wa = 0;

   scanf("%d", &n);
   for ( i = 0; i < n; i++ ) {
      scanf("%d", &S[ i ]);
   }
   scanf("%d", &q);
   for ( j = 0; j < q; j++ ) {
      scanf("%d", &T[ j ]);
   }

   for ( i = 0; i < n; i++ ) {
      for ( j = 0; j < q; j++ ) 
         if ( S[ i ] == T[ j ] ) {
            wa = wa + 1;
         }
   }

   printf("%d\n", wa);

   return 0;
}