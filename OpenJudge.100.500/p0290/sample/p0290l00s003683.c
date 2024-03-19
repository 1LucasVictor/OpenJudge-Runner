#include <stdio.h>

int check_prime(int a[], int n) {
  int count;
  int flag;
  for (int i = 0; i < n; i++) {
    if (a[i] == 2 || a[i] == 3) {
      count += 1;
      continue;
    }
    if (a[i] % 2 != 0) {
      for (int j = 3; j < a[i]; j += 2) {
        if (a[i] % j == 0) {
          flag = 1;
          break;
        }
      }
      if (flag == 0) {
        count += 1;
      }
    }
  }
  return count;
}

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("%d", check_prime(a, n));
  return 0;
}

