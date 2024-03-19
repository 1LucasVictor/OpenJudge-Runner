#include<stdio.h>

int main(void) {
   char s[4];
   int cnt = 0;

   scanf("%s", s);
   
   for(int i = 0; i < 3; i++) {
      if(s[i] == s[i+1]) {
         cnt++;
      }
   }

   if(cnt == 0) {
      printf("Good\n");
   } else {
      printf("Bad\n");
   }
   return 0;
}
