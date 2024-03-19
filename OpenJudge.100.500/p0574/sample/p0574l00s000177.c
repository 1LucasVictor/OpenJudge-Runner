#include <stdio.h>

int main(){
  char S[4];
  for(int i = 0; i < 4; i++){
    scanf("%c", &S[i]);
  }
  
  if(S[0] == S[1] || S[1] == S[2] || S[2] == S[3])
    printf("Bad");
  else
    printf("Good");
  return 0;
}