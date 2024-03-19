#include <stdio.h>
#include <math.h>

int isPrime(int n, int x) {
  int i, j;
  for (i = 0; i < n; i++) {
    if (x == 2) {
      return 1;
    } else if (x < 2 || x % 2 == 0) {
      return 0;
    }

    j = 3;
    while (j <= sqrt(x)) {
      if (x % j == 0) {
        return 0;
      }
      j = j + 2;
    }
    return 1;
  }
}

int main(void) {
  int i, n, a[100], count = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if (isPrime(n, a[i]) == 1) {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}

