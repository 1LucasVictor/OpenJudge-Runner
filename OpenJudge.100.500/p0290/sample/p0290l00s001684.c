#include <stdio.h>

int IsPrimeCheck(int n) {
  int i;
  int m = n;

  for (i = 2; i < m; i++) {
    if (n%i == 0) return 0;
    m = n/i;
  }
  return 1;
}

int main() {
  int n;
  int buf;
  int i;
  int cnt = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &buf);
    if (IsPrimeCheck(buf)) {
      cnt++;
    }
  }

  printf("%d\n", cnt);
  
  return 0;
}
