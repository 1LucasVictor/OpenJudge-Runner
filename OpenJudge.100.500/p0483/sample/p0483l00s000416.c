#include<stdio.h>

int main(void) {
   int n;
   scanf("%d",&n);

   if((n%100)%10 == 7 || n/700 == 1) {
      printf("Yes");
   } else {
      printf("No");
   }

   return 0;
}
