#include<stdio.h>
int main(void){
   int n, R[200000], max, key, i, l;
   scanf("%d", &n);
   for ( i = 0; i < n; i++ ) {
      scanf("%d", &R[i]);
   }
   max = R[1] - R[0]; /*printf("\n%d\n", max);*/

   for ( i = 2; i < n; i++ ) {
      if ( R[i] > R[i - 1] ) max = R[i] - R[1];
   }

   for ( i = 1; i < n; i++ ) {
      key = R[i + 1] - R[i];
      for ( l = 2; l < n - i; l++ ) {
         if ( R[i + l - 1] < R[i + l] ) { key = R[i + l] - R[i]; /*printf("%d\n", key);*/ }
      }
      if ( key > max ) max = key;
   }
   printf("%d\n", max);
   return 0;
}