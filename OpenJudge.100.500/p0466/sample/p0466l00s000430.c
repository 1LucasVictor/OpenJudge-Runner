#include<stdio.h>
#include<string.h>

int main() {
   char S[10];
   char T[11];
   int count = 0;

   scanf("%s", S);
   scanf("%s", T);

   for(int i = 0; i < strlen(S); i++) {
      if(S[i] != T[i]) {
         count++;
         break;
      }
   }

   if(count > 0) {
      printf("No\n");
   }else {
      printf("Yes\n");
   }
   return 0;
}