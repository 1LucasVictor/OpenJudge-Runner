#include <stdio.h>
#include <string.h>

int main() {
  char s[11], t[12];
  scanf("%s %s", &s, &t);
  for(int i=0;i<strlen(s);i++){
    if(s[i] == t[i]) continue;
    else {
      printf("No");
      return 0;
    }
  }
  printf("Yes");
  return 0;
}