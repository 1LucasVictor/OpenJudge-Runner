#include<stdio.h>

int main(void) {
   char s[3];
   scanf("%s",s);
   int cnt1 = 0;
   int cnt2 = 0;

   for(int i = 0; i < 3; i++) {
      if(s[i] == 'A') {
         cnt1++;
      }
      if(s[i] == 'B') {
         cnt2++;
      }
   }
   if(cnt1 > 0 && cnt2 > 0) {
      printf("Yes");
   } else {
      printf("No");
   }

   return 0;
}
