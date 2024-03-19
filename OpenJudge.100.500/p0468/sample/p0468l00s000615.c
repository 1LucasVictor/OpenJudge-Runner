#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char S[4];
  char A[] = "ABC";
  
  scanf("%s",S);
  
  if(strcmp(S,A) == 0) printf("ARC\n");
  else printf("ABC\n");
  
  return 0;
}