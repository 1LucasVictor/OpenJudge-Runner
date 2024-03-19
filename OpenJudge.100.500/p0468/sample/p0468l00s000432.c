#include <stdio.h>
int main(void){
  char S[10];
  scanf("%s", S);
  if(S[1]=='B'){
    printf("ARC");
  }
  else if (S[1]=='R'){
    printf("ABC");
  }
  return 0;
}