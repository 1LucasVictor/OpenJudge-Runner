#include <stdio.h>

int l, r, x = 0;
int a = 2018;

int main(void) {
   if (scanf("%d %d", &l, &r) == 1);
      if ((r - l) >= 2019) {
         printf("0\n");
         return 0;
      }
      for (int i = l; i < r; i++) {
         for (int j = i + 1; j <= r; j++) {
            x = (i % 2019) * (j % 2019) % 2019;
            if (x < a) {
               if (x == 0) {
                  printf("0\n");
                  return 0;
               }
               a = x;
            }
         }
      }
      printf("%d\n", a);
      return 0;
}