#include <stdio.h>
#include <math.h>

void check_prime(int a[], int n) {
  int count;
  int flag;
  for (int i = 0; i < n; i++) {
    if (a[i] == 2 || a[i] == 3 || a[i] == 5 || a[i] == 7) {
      count += 1;
    } else if (a[i] % 2 != 0){
      int j = 3;
      while (j <= sqrt(a[i])) {
        if (a[i] % j == 0) {
          flag = 1;
          break;
        }
        j += 2;
      }
      if (flag == 0) {
        count += 1;
      }
      flag = 0;
    }
  }
  printf("%d", count);
}

int main() {
  int n;
  scanf("%d\n", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  check_prime(a, n);
  return 0;
}

