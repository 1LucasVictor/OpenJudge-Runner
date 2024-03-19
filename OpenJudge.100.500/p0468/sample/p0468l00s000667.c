#include <stdio.h>
#include <string.h>

int main(void)
{
  char contest[3];
  
  scanf("%s",&contest);
  
  if(strcmp(contest,"ABC") == 0)
  {
    printf("ARC\n");
  }
  else if(strcmp(contest,"ARC") == 0)
  {
    printf("ABC\n");
  }
  else
  {
    
  }
  
  return 0;
}