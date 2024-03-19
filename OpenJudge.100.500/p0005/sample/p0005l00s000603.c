#include <stdio.h>
#include <string.h>
#define MAXLENGTH (20)

int main(void)
{                  
  char str[MAXLENGTH];  	
  int i;

  scanf("%s", str);
  for(i = strlen(str)-1; i>=0; i--)
  {
    printf("%c",str[i]);  	  
  }
  printf("\n");

  return 0;		
}