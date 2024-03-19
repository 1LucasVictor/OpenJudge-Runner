#include <stdio.h>
#include <string.h>

int main(void) {
  char s[100];
  char t[100];
  int leng1;
  int leng2;
  int judge = 1;
  scanf("%s", s);
  scanf("%s", t);
  leng1 = strlen(s);
  leng2 = strlen(t);
  for(int i = 0; i < leng1; i++) {
    if(s[i] != t[i]) {
      judge = 0;
    }
  }
  if(judge == 1 && leng2 - leng1 == 1) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
