#include <stdio.h>

int main() {
  int i;
  char s[4];
  scanf("%s", s);
  
  for(i = 0; i < 2; i++) {
    if (s[i] == s[i+1])
      continue;
    else {
      printf("Yes");
      return(0);
    }
  }
  
  printf("No");
  return(0);
}