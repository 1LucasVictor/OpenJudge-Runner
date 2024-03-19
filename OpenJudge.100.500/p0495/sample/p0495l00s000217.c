#include <stdio.h>

int main() {
  char S[3];
  int judge=0;
  scanf("%s",S);
  for(int i=0;i<2;i++) {
    if(S[i] !=S[i+1]) {
      printf("Yes");
      judge++;
      break;
    }
  }
  if(judge==0) {
    printf("No");
  }
  return 0;
}