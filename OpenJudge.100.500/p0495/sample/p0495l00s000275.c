#include <stdio.h>

int main(void){
  char S[5];
  scanf("%s", S);

  if(S[0] == S[1] && S[1] == S[2])
    puts("No");
  else
    puts("Yes");

  return 0;
}
