#include <stdio.h>

int main(void)
{
  char input[3];
  int ret = 0, i;

  scanf("%s", input);
  for(i = 0;i < 3;i++)
    if (input[i] == '1')
      ret += 1;
  printf("%d\n", ret);
  return (0);
}