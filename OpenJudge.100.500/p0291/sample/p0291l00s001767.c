#include <stdio.h>

void compare_profit(int r[], int n) {
  int max;
  for (int i = 1; i <n; i++) {
    if (i == 1) {
      max = r[1] - r[0];
    } else {
      for (int j = 1; j < i; j++) {
        int diff = r[i] - r[j];
        if (diff > max) {
          max = diff;
        }
      }
    }
  }
  printf("%d\n", max);
}

int main() {
  int n;
  scanf("%d", &n);
  int r[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &r[i]);
  }
  compare_profit(r, n);

  return 0;
}

