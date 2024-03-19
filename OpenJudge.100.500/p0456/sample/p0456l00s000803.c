#include <stdio.h>
#include <string.h>
int main() {
  char a[200000], b[200000];
  int count, i = 0;
  scanf("%s%s", a, b);
  while (i <= strlen(b)) {
    if (a[i] != b[i]) {
      count += 1;
    }
    i++;
  }
  printf("%d", count);
  return 0;
}