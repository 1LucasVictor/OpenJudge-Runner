#include <stdio.h>

int main(void)
{
  int stack[2][10];
  int num[2] = {0};
  int buf;
  int i;

  while (scanf("%d", &buf) != EOF) {
    if (buf != 0) {
      stack[0][num[0]] = buf;
      num[0]++;
    } else {
      num[0]--;
      stack[1][num[1]] = stack[0][num[0]];
      num[1]++;
    }
  }

  for (i = 0; i < num[1]; i++) {
    printf("%d\n", stack[1][i]);
  }

  return 0;
}