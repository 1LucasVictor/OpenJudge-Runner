#include<stdio.h>

int main(void) {
   int i;
   int k, a, b;
   int cnt = 0;

   scanf("%d %d %d",&k, &a, &b);

   for(i = a; i <= b; i++) {
      if(i%k == 0) {
         cnt = 1;
      }
   }

   if(cnt == 1) {
      printf("OK");
   } else {
      printf("NG");
   }

   return 0;
}