#include <stdio.h>
#include <stdbool.h>

int main(void) {
  char S[5];
  scanf("%s", S);

  static char s[26];
  for(int i = 0; i < 4; i++) {
    s[S[i] - 'A']++;
  }
  bool flag = true;
  int num = 0;
  for(int i = 0; i < 26; i++) {
    if(s[i] != 0) {
      num++;
      if(s[i] != 2) {
	flag = false;
	break;
      }
    }
  }
  if(num != 2)
    flag = false;
  if(flag)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}
