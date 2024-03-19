#include <stdio.h>

int main(void){
   int n, i, j, k, l;

   scanf("%d", &n);

   int a[n];

   for(i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }


   l = 0;




   for(i = 0; i < n; i++) {
      if (a[i] < 3||a[i] % 2 == 1){

   k = 0;
   for(j = 1; j < a[i] + 1; j++) {
      if (a[i] % j == 0){
         k++;
      }
   }
      if (k == 2){
         l++;
      }
      }
   }

   printf("%d\n", l);

   return 0;
}
