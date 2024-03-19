#include <stdio.h>

int main(void){

  char s[5];
  scanf("%s", s);

  if (s[0] == s[1]) {
    if (s[0] != s[2] && s[2] == s[3]) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  } else {
    if (s[0] == s[2] && s[1] == s[3]) {
      printf("Yes\n");
    } else if (s[0] == s[3] && s[1] == s[2]) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }

  return 0;
}