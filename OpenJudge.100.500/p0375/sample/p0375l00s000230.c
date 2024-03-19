#include <stdio.h>

void call(int N);

int main(void) {
  int n;
  scanf("%d", &n);

  call(n);

  return 0;
}

void call(int N) {
  int i = 0;

  while(++i <= N) {
    int x = i;

    if(x % 3 == 0) {
      printf(" %d", i);
      continue;
    }

    while(x) {
      if(x % 10 == 3) {
        printf(" %d", i);
        break;
      }
      x /= 10;
    }
  }

  printf("\n");
}

