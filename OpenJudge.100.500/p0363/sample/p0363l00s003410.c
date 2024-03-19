#include <stdio.h>

int main(void)
{
  int a[3];
  int tmp=0;
  int i, j;
  scanf("%d %d %d", &a[0], &a[1], &a[2]);

  for (i = 0; i < 2; i++) {
    for (j = i; j < 3; j++) {
      if (a[i] > a[j]) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }

  for (i = 0; i < 3; i++) {
    printf("%d", a[i]);
    if (i == 2) {
      putchar('\n');
    } else {
      putchar(' ');
    }
  }

  return 0;
}