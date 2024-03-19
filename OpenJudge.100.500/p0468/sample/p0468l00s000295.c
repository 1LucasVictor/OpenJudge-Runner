#include <stdio.h>

int main()
{
  char aa[4];
  scanf("%s", aa);
  if(aa[1] == 'B')
  {
    puts("ARC");
  }
  else
  {
    puts("ABC");
  }
  return 0;
}