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
      if (a[i] > 1) {
      if (a[i] < 3||a[i] % 2 == 1){
         if (a[i] < 6||a[i] % 5 != 0) {
            if (a[i] < 4||a[i] % 3 != 0) {
               if (a[i] < 8||a[i] % 7 != 0) {
                  if (a[i] < 12||a[i] % 11 != 0) {

   k = 0;

   j = 1;
   do {

      if (a[i] % j == 0){
         k++;
      }
      if (k > 2){
         break;
      }
      j++;

   } while(j < a[i] + 1);


      if (k == 2){
         l++;
      }
      }
      }
      }
      }
      }
      }
   }

   printf("%d\n", l);

   return 0;
}
