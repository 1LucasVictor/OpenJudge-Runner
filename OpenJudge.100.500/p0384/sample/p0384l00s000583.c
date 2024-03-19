#include <stdio.h>

int main() {
  char a[1300];
  int i = 0, j = 0;
  
  while (1) {
    scanf("%c", &a[j]);
    if (a[j] == '\n') break;
    j++;
  }

  for (i = 0; i < j; i++) {
    if ('A' <= a[i] && a[i] <= 'Z') {
      a[i] += 32;
    } else if ('a' <= a[i] && a[i] <= 'z') {
      a[i] -= 32;
    }
  }

  for (i = 0; i < j; i++) {
    printf("%c", a[i]);
  }
  printf("\n");

  return 0;
}
