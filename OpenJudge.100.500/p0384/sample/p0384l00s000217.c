#include <stdio.h>

int main(){
  char s[2048];
  int i;
  fgets(s, sizeof(s), stdin);
  for(i = 0;s[i] != '\0';i++){
    if('a' <= s[i] && s[i] <= 'z') s[i] += 'A' - 'a';
    else if('A' <= s[i] && s[i] <= 'Z') s[i] += 'a' - 'A';
  }

  printf("%s",s);
  return 0;
}
