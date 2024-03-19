#include <stdio.h>
#include <stdlib.h>

int less(void const* pa, void const* pb) {
  int a = *(int const*)pa;
  int b = *(int const*)pb;
  if (a < b) return +1;
  if (a > b) return -1;
  return 0;
}

int main(void) {
  size_t n;
  scanf("%zu", &n);

  int a[n];
  for (size_t i = 0; i < n; ++i)
    scanf("%d", &a[i]);

  qsort(a, n, sizeof(int), less);
  for (size_t i = 1; i < n; ++i)
    if (a[i-1] == a[i]) return puts("NO"), 0;

  puts("YES");
}
