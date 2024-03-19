#include <stdio.h>

int main(void);

int main(){
  unsigned char s[3] = {};
  unsigned int tmp;
  
  scanf("%c%c%c", &s[0], &s[1], &s[2]);
  tmp = (unsigned int)((s[0]-'0') + (s[1]-'0') + (s[2]-'0'));
  printf("%d\n", tmp);
  
  return 0;
}