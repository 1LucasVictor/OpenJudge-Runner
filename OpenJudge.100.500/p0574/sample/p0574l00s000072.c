#include <stdio.h>

int main(void) {
  char S[5];
  scanf("%s", S);
  int flag = 0;
  int i;
  for (i = 0; i < 3; i++) {
    if (S[i] == S[i + 1]) {
      flag++;
    }
  }

  if(flag == 0){
    printf("Good\n");
  } else {
    printf("Bad\n");
  }
 
  return 0;
}
