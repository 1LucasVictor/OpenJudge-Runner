#include <stdio.h>
#include <string.h>

int main()
{
  char S1[]="ARC";
  char S2[]="ABC";
  char S[4];
  
  scanf("%s",S);
  if(strcmp(S,S1))
    printf("%s",S1);
  else
    printf("%s",S2);
  return 0;
}