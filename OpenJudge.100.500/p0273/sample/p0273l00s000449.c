#include<stdio.h>

int main() {

   int F[50];
   int i, j, n;

   scanf("%d", &n);

   F[0] = 1;
   F[1] = 1;

   for (i = 2; i <= n; i++) {
      F[i] = F[i - 1] + F[i - 2];
   }

   printf("%d\n", F[n]);

   return 0;
}
