#include<stdio.h>

int main(void) {
   int x, y;
   int i,cnt = 0;

   scanf("%d %d",&x, &y);

   while(i <= x) {
      if(y == 2*i + 4*(x-i)) {
         cnt = 1;
      }
      i++;
   }

   if(cnt == 1) {
      printf("Yes");
   } else {
      printf("No");
   }

   return 0;
}