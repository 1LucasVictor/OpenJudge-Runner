#include<stdio.h>
#include<string.h>

int main() {
   char S[3];
   int count = 0;

   scanf("%s", S);

   for(int i = 2; i > 0; i--) {
      for(int f = 0; f <= i; f++) {
         if(S[i] != S[f]) {
            count++;
         }
      }
   }
   if(count > 0) {
      printf("Yes\n");
   }else {
      printf("No\n");
   }
   return 0;
}

