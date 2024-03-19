#include <stdio.h>
typedef long long int lld;

int main(void) {
  int n;
  scanf("%d", &n);
  puts(n / 100 == 7 || n % 100 / 10 == 7 || n % 10 == 7 ? "Yes" : "No");
}