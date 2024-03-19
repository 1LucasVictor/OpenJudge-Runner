#include <stdio.h>

int main(void)
{
  char str[4]; //'A','B','c','\0'
  scanf("%s",str);
  
  if(str[0] == 'A' && str[1] == 'B' && str[2] == 'C')
    printf("ARC\n");
  else if(str[0] == 'A' && str[1] == 'R' && str[2] == 'C')
    printf("ABC\n");
  
  return 0;
}