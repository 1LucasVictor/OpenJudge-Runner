#include <stdio.h>

int main(void){
  char S[4];
  scanf("%s", S);

  if(S[0] == S[1] && S[1] == S[2]){
    printf("No\n");
    return 0;
  }
  if(S[0] == S[1] && S[2] == S[3]){
    printf("Yes\n");
    return 0;
  }
  if(S[1] == S[2] && S[0] == S[3]){
    printf("Yes\n");
    return 0;
  }
  if(S[0] == S[2] && S[1] == S[3]){
    printf("Yes\n");
    return 0;
  }
  if(S[0] == S[1] && S[2] == S[3]){
    printf("Yes\n");
    return 0;
  }

  printf("No\n");

  return 0;
}
