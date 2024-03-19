#include <stdio.h>
#define EXCHANGE(a, b){ int t; t = a; a = b; b = t; }

int main()
{
  int num, n[3], i, j, tmp;

  scanf("%d", &num);
  while (num--) {
    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    for (i = 0; i < 2; i++) {
      for (j = 2; j > i; j--) {
        if (n[j - 1] > n[j]) {
          EXCHANGE(n[j - 1], n[j]);
        }
      }
    }
    if (n[0] * n[0] + n[1] * n[1] == n[2] * n[2]) {
      puts("YES");
    } else {
      puts("NO");
    }
  }

  return 0;
}