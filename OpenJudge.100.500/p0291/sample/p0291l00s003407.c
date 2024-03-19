#include<stdio.h>

int main () {
   int n, i, j, max;
   int a[200000] = {0};

   scanf("%d", &n);

   for(i = 0; i < n; i++){
      scanf("%d", &a[i]);
   }

   max = a[1] - a[0];

   for(i = 0; i < n - 1; i++){
      for(j = i + 1; j < n; j++){
         if(a[j] - a[i] > max){
            max = a[j] - a[i];
         }
      }
   }

   printf("%d\n", max);

   return 0;
}