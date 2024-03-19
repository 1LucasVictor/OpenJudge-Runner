#include <stdio.h>

int main(){

   int a[10000];
   int b, i, n, max, min;

   scanf("%d", &n);
   for (i = 0; i < n; i++){
      scanf("%d", &a[i]);
      b = b + a[i];
   }

   max = a[0];
   min = a[0];

   for (i = 0; i < n; i++){
      if (max < a[i]){
         max = a[i];
      }
      if (min > a[i]){
         min = a[i];
      }
   }

   printf("%d %d %d\n", min, max, b);

   return 0;

}