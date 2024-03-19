#include <stdio.h>

int main(void) {
  int a[100], i = 0;

  while (scanf("%d", &a[i]) != EOF) {
    if (a[i] == 0) {
      printf("%d\n", a[i-1]);
      i--;
    }
    else
      i++;
  }
  return 0;
}