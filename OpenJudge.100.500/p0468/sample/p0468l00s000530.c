#include<stdio.h>

int main(void) {
   char s[5];
   scanf("%s",s);
   if(s[1] == 'B') {
      printf("ARC");
   }
   if(s[1] == 'R') {
      printf("ABC");
   }

   return 0;
}