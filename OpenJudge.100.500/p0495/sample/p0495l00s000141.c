#include <stdio.h>
#include <string.h>
     
int main(void) {
   char str[4];
   int count = 0;
   scanf("%s", str);
   for(int i = 0; i < 3 - 1; i++) {
      if(str[i] != str[i+1]) {
         count++;
      }
   }
   if(str[3-1] != str[0]) {
      count++;
   }
   if(count > 0) {
      printf("Yes");
   } else {
      printf("No");
   }
   return 0;
}
