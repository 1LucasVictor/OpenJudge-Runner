#include <stdio.h>

int main() {
  int i, n;
  int as[100];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &as[i]);
    if (as[i] % 2 == 0 && as[i] % 3 !=0 && as[i] % 5 != 0) {
      puts("DENIED");
      return 0;
    }
  }
  puts("APPROVED");
  return 0;
}