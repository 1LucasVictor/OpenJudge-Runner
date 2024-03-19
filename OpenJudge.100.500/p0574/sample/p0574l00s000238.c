#include <stdio.h>
#include <stdbool.h>

int main(void) {
  char S[5];
  scanf("%s", S);
  bool flag = false;
  for(int i = 0; i < 3; i++) {
    if(S[i] == S[i+1]) {
      flag = true;
      break;
    }
  }
  
  if(flag)
     printf("Bad\n");
  else
     printf("Good\n");
  return 0;
}
