#include<stdio.h>

int main(void) {
   int n, i;
   int cnt1 = 0;
   int cnt2 = 0;
   scanf("%d",&n);
   int an[n];

   for(i = 0; i < n; i++) {
      scanf("%d",&an[i]);
   }

   for(i = 0; i < n; i++) {
      if(an[i]%2 == 0) {
         cnt2++;
         if(an[i]%3 == 0 || an[i]%5 == 0) {
            cnt1++;
         }
      }
   }

   if(cnt1 ==  cnt2) {
      printf("APPROVED");
   } else {
      printf("DENIED");
   }
   return 0;
}
