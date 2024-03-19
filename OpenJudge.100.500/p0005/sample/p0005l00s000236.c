//Reverse Sequence
// 2018.3.13

#include <stdio.h>
#include <string.h>

int
main (void)
{
  char str[21] = {0};
  
  scanf("%s\n", str);
  int l;
  l = strlen(str);
  while(l--)
    {
      printf("%c", str[l]);
    }
  printf("\n");
  
  return 0;
}

