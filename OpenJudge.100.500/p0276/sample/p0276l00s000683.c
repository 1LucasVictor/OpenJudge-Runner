#include <stdio.h>

int main( )
{
   int n, i, j, a, b, c;
   int M[100][100];

   scanf("%d", &n);

   for ( i = 0; i < n; i++ ) {
      for ( j = 0; j < n; j++ ) {
         M[i][j] = 0;
      }
   }

   for ( i = 0; i < n; i++ ) {
      scanf("%d%d", &a, &b);
      if ( b != 0 ) {
         for ( j = 0; j < b; j++ ) {
            scanf("%d", &c);
            M[a-1][c-1] = 1;
         }
      }
   }

   for ( i = 0; i < n; i++ ) {
      for ( j = 0; j < n; j++ ) {
         printf("%d", M[i][j]);
         if( j != n - 1 ) printf(" ");
      }
   printf("\n");
   }
   return 0;
}