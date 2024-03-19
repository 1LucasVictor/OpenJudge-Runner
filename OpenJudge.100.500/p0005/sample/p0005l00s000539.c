#include <stdio.h>

int main(void)
{
  char str[20];
  int i;
  scanf("%s", str);
  i = 0;
  while(str[i] != '\0'){
  i++;
  }
  while(i != 0){
  printf("%c", str[i-1]);
  i--;
  }
  printf("\n");
  return (0);
}