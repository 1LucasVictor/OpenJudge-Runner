#include <stdio.h>
#include <math.h>

int main(void) {
  int i, j, n, a[100], count = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++) {
    if (a[i] == 2) {
      count++;
      continue;
    } else if (a[i] < 2 || a[i] % 2 == 0) {
      continue;
    }

    j = 3;
    while (j <= sqrt(a[i])) {
      if (a[i] % j == 0) {
        break;
      }
      j = j + 2;
    }
    count++;
  }

  printf("%d\n", count);
  return 0;
}

