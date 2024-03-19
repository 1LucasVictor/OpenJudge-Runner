#include <stdio.h>

int main(void)
{
  int b=0;
  char n[10];

  fgets(n, sizeof(n), stdin);

  for (int i=0; n[i] != '\n'; i++) {
    if (n[i] == '1') {
      b++;
    }

  }

  printf("%d\n", b);

  return 0;
}
