#include <stdio.h>
#include <stdlib.h>

int main(void){
  char S[4];
  scanf("%s",S);
  
  if (S[1]=='B') S[1] = 'R';
  else S[1] = 'B';
  
  printf("%s",S);
  
  return 0;
}