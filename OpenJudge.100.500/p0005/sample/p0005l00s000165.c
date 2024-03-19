#include <stdio.h>

int main(void)
{
  char str[20];
  char re;
  int i;
  int c = 0;

  scanf("%s", str);

  for(i = 0; str[i] != '\0'; i++)
    c++;

  for(i = 0; i < c/2; i++){
    re = str[i];
    str[i] = str[c-i-1];
    str[c-i-1] = re;
  }

  printf("%s\n", str);

  return 0;
}