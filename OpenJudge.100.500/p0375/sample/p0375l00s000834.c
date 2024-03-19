#include <stdio.h>

int check(int n) {
  if (n % 3 == 0) {
    return 1;
  }

  while (n > 10) {
    n %= 10;
  }

  if (n % 10 == 3) {
    return 1;
  } else {
    return 0;
  }

}


int main(void) {
  int i;
  int num, count;

  scanf("%d", &num);
  for (i = 3; i <= num; i++) {
    count = check(i);
    if (count == 1)
      printf(" %d", i);
  }

  putchar('\n');

  return 0;
}

