#include <stdio.h>

int main(void)
{
  int stack[10];
  int num = 0;
  int buf;
  int i;

  while (scanf("%d", &buf) != EOF) {
    if (buf != 0) {
      stack[num] = buf;
      num++;
    } else {
      num--;
      printf("%d\n", stack[num]);
    }
  }

  return 0;
}