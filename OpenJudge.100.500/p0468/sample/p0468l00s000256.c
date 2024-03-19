#include<stdio.h>

int main(void)
{
  char str[10];
  scanf("%s",str);

  if(str[1] != 'B')
    printf("ABC");
  else
    printf("ARC");
  return 0;
}