#include<stdio.h>
#include<string.h>

int main(void) {
  char s[11];
  char t[12];
  scanf("%s", s);
  scanf("%s", t);
  int i;
  for(i=0; i<strlen(s); i++) {
    if(s[i] != t[i]) {
      printf("No\n");
      return 0;
    }
  }
  if(t[i+1] != '\0') {
    printf("No\n");
    return 0;
  }
  else {
    printf("Yes\n");
    return 0;
  }
}