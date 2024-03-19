#include<stdio.h>

int main(void) {
   int n, i;
   int cnt = 0;
   int divCount = 0;
   scanf("%d",&n);
   int an[n];
   for(i = 0; i < n; i++) {
      scanf("%d",&an[i]);
   }

   for(i = 0; i < n; i++) {
      if(an[i]%2 == 0) {
         divCount++;
         if(an[i]%3 == 0 || an[i]%5 == 0) {
            cnt++;
         }
      }
   }

   if(divCount == cnt) {
      printf("APPROVED");
   } else {
      printf("DENIDE");
   }

   return 0;
}
