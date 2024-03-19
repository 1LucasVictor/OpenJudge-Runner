#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int sum;
  char num;
  int i;

  sum = 0;
  while ((num = getchar()) != EOF) {
    if (num != '\n') sum += num - 0x30;
    else {
      if (sum != 0) {
        printf("%d\n", sum);
        sum = 0;
      } else break;
    }
  }

  return 0;
}