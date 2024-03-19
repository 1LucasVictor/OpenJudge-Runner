#include <stdio.h>

int main(void)
{
  char str[100];
  int judge = 0;

  fgets(str,100,stdin);

  if(strcmp(str,"7 5 5\n") == 0)
    judge = 1;
  else if(strcmp(str,"5 7 5\n") == 0)
    judge = 1;
  else if(strcmp(str,"5 5 7\n") == 0)
    judge = 1;

  if(judge == 1)
    printf("YES\n");
  if(judge == 0)
    printf("NO\n");

   return 0;
}