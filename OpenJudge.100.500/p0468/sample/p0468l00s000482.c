#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
  char S[3];
  char *S1="ABC";

  scanf("%s",S);
  
  //printf("%s",S);

  if(strcmp(S,S1)==0)
  {
    printf("ARC");
    return 0;
  }

  printf("ABC");

  return 0;
}
