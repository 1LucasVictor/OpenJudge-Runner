#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int sum;
  char num[1000 + 1];
  int i;

  while (1) {
    fgets(num, 1000 + 1, stdin);
    num[strlen(num) - 1] = '\0';
    if (!strcmp(num, "0")) break;

    sum = 0;
    for (i = 0; i < strlen(num); i++) sum += num[i] - 0x30;

    printf("%d\n", sum);
  }

  return 0;
}