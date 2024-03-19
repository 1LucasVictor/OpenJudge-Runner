#include <stdio.h>

int main()
{
  int i, j, k, l, cnt = 0;
  int n[100], x[100];

  for (i = 0; i < 100; i++) {
    scanf("%d %d", &n[i], &x[i]);
    if (n[i] == 0 && x[i] == 0) {
      break;
    }
  }

  for (i = 0; i < n[i]; i++) {
    for (j = 1; j < n[i]; j++) {
      for (k = j + 1; k < n[i]; k++) {
        for (l = k + 1; l <= n[i]; l++) {
          if (x[i] == j + k + l) {
            cnt++;
          }
        }
      }
    }
    printf("%d\n", cnt);
    cnt = 0;
  }

  return 0;
}