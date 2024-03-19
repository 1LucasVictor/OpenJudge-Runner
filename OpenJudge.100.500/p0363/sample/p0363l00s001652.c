#include <stdio.h>

int main(void) {

  int num[3];
  int i, j;
  int temp;

  scanf("%d %d %d", &num[0], &num[1], &num[2]);

  for (i = 0; i < 3; i++) {
    for (j = 2; j > i; j--) {
      if(num[j - 1] > num[j]) {
        temp = num[j];
        num[j] = num[j - 1];
        num[j - 1] = temp;
      }
    }
  }

  printf("%d %d %d\n", num[0], num[1], num[2]);

  return 0;
}

