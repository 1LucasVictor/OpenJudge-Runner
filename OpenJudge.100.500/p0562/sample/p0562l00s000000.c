#include <stdio.h>

int main(void) {
   int A, B, C, cnt = 0;

   scanf("%d %d", &A, &B);

   while(C < B) {
      C = 1 + (A * cnt) - cnt;
      cnt++;
   }

   cnt;

   printf("%d\n", cnt - 1);

   return 0;
}
