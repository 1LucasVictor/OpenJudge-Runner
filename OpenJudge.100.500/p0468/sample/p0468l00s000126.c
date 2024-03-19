#include <stdio.h>
#include <string.h>

int main()
{
  char str[3];
  
  scanf("%s",&str);
  
  if(strcmp(str,"ABC")==0)
    printf("ARC");
  else
    printf("ABC");
}