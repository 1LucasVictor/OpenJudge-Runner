#include <stdio.h>

int main(void)
{
  int i;
  int cnt = 0;
  char str[25];
  scanf("%s", str);

  while (str[cnt] != '\0'){
    cnt++;
  }
  for (i = cnt - 1; i >= 0; i--){
    printf("%c", str[i]);
  }
  printf("\n");

  return (0);
}