#include <stdio.h>
int main(){
  char S[999];
  scanf("%s",S);
  if(S[1] == 'B'){
    printf("ARC\n");
  }
  else if(S[1] == 'R'){
    printf("ABC\n");
  }
  return 0;
}