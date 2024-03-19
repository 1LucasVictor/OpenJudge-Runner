#include<stdio.h>

int main(void)
{
   int n, x, i, j, k, l;

   while(1) {
      int l = 0;

      scanf("%d %d", &n, &x);

      if (n == 0 && x == 0) {
          break;
      }

      for (i = 1; i <= n - 2; i++) {
        for (j = i + 1; j <= n - 1; j++) {
          for (k = j + 1; k <= n; k++) {
            if (i + j + k == x) {
              l++;
            }
          }
        }
      }
      printf("%d\n", l);
   }
   return 0;
}
