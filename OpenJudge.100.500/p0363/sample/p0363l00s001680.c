#include <stdio.h>

int main()
{
  int a[100], i, j, tmp;

  for (i = 0; i < 3; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 3; i++) {
    for (j = i + 1; j < 3; j++) {
      if (a[i] > a[j]) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }
  printf("%d %d %d\n", a[0], a[1], a[2]);
}

