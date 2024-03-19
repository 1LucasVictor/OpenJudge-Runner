#include <stdio.h>
#include <string.h>

void main()
{
  char ids[256];
  char idt[256];
  int i = 0;
  int count = 1;
  scanf("%s", ids);
  scanf("%s", idt);
  while ( ids[i] != '\0')
  {
    if(ids[i] != idt[i])
    {
      printf("No\n");
      count = 0;
      break;
    }
    i++;
  }
  if( count == 1)
  {
    printf("Yes\n");
  }
}