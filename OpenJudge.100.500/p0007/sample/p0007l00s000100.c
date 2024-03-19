#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int search(int n, int pos)
{
  if (pos >= 4) {
    return n == 0;
  } else {
    int i, c = 0;
    for (i = 0; i <= MIN(9, n); i++) {
      c += search(n - i, pos + 1);
    }
    return c;
  }
}

int main()
{
  int n;
  while (scanf("%d", &n) != EOF) {
    printf("%d\n", search(n, 0));
  }
  return 0;
}